/*-----------------------------------------------------------------------
 * File: SQUARE.C
 *
 * Copyright (c) 1995-2000 Intel Corporation. All rights reserved.
 *-----------------------------------------------------------------------
 */
/*
 * INTEL CONFIDENTIAL 
 * This file, software, or program is supplied under the terms of a 
 * license agreement or nondisclosure agreement with Intel Corporation 
 * and may not be copied or disclosed except in accordance with the 
 * terms of that agreement. This file, software, or program contains 
 * copyrighted material and/or trade secret information of Intel 
 * Corporation, and must be treated as such. Intel reserves all rights 
 * in this material, except as the license agreement or nondisclosure 
 * agreement specifically indicate. 
 */
/* 
 * WARNING: EXPORT RESTRICTED. 
 * This software listing contains cryptographic methods and technology. 
 * It is export restricted by the Office of Defense Trade Controls, United 
 * States Department of State and cannot be downloaded or otherwise 
 * exported or re-exported (i) into (or to a national or resident of) Cuba, 
 * Iraq, Libya, Yugoslavia, North Korea, Iran, Syria or any other country 
 * to which the US has embargoed goods; or (ii) to anyone on the US 
 * Treasury Department's list of Specially Designated Nationals or the US 
 * Commerce Department's Table of Denial Orders. By downloading or using 
 * this product, you are agreeing to the foregoing and you are representing 
 * and warranting that you are not located in, under the control of, or a 
 * national or resident of any such country or on any such list. 
 */


     
/* Module name: square.c
   Computes t = a * a
*/
     
#include "../../include/icl.h"
#include "../../include/rsa.h"
     
#define HALFWORDMASK     (WORDMASK >> (WORDSIZE/2))
     
void __stdcall ICL_Square (RSAData *a, RSAData *t) 
{
  register ICLWord     C, S, sum, carry, carry2;
  ICLWord          currentA, currentB, currentT,
               a0b0, a0b1, a1b0, a1b1, cAand, cAshift, cBand, cBshift, 
               *tval, *aval;
  long               i, j, alength;
     
/* Initialize result CMP Integer */
  tval=t->value;
  alength=a->length*2;   /* the result will have this # of words */ 
  for (i=0; i<alength; i++)
    tval[i] = 0;
/* Computation loop */
  alength=a->length;
  aval=a->value;
  for (i = 0; i < alength; i++) {
    C = 0;
    currentB = aval[i];
    cBand = currentB & HALFWORDMASK;
    cBshift = currentB >> (WORDSIZE/2);
	j = i;
	/* Begin inner product:  (C,S) = a[j]*a[i] + t[i+j] + C */
    currentA = aval[j];
    currentT = tval[i+j];
/* Perform the full word multiplication by dividing each word into two 
half words, and then multiplying and adding appropriately.
*/
    cAand = currentA & HALFWORDMASK;
    cAshift = currentA >> (WORDSIZE/2);
    a0b0 = cAand  * cBand;
    a1b0 = cAshift * cBand;
    a0b1 = cAand  * cBshift;
    a1b1 = cAshift * cBshift;
/* Compute S0 */
    S = (a0b0 & HALFWORDMASK) + (currentT & HALFWORDMASK) +
        (C & HALFWORDMASK);
    carry = S >> (WORDSIZE/2);
    S = S & 0x0000FFFF;
/* Compute S1 */
    sum = (a0b1 & HALFWORDMASK) + (a1b0 & HALFWORDMASK) +
        (a0b0 >> (WORDSIZE/2)) + (currentT >> (WORDSIZE/2)) +
          (C >> (WORDSIZE/2)) + carry;
    carry = sum >> (WORDSIZE/2);
    S = S | (sum << (WORDSIZE/2));
/* Compute C0 */
    sum = (a0b1 >> (WORDSIZE/2)) + (a1b0 >> (WORDSIZE/2)) +
        (a1b1 & HALFWORDMASK) + carry;
    carry = sum >> (WORDSIZE/2);
    C = sum & HALFWORDMASK;
/* Compute C1 */
    sum = (a1b1 >> (WORDSIZE/2)) + carry; 
    C = C | (sum << (WORDSIZE/2));
/* End inner product ends here */
    tval[i+j] = S;
	carry2 = 0;
	// printf("i = %d, j = %d, carry2 %x, carry %x, C %x, S %x\n", i, j, carry2, carry, C, S);
    for (j = i + 1; j < alength; j++) {
/* Begin inner product:  (C,S) = 2*a[j]*a[i] + t[i+j] + C */
      currentA = aval[j];
      currentT = tval[i+j];
/* Perform the full word multiplication by dividing each word into two 
half words, and then multiplying and adding appropriately.
*/
      cAand = currentA & HALFWORDMASK;
      cAshift = currentA >> (WORDSIZE/2);
      a0b0 = cAand  * cBand;
      a1b0 = cAshift * cBand;
      a0b1 = cAand  * cBshift;
      a1b1 = cAshift * cBshift;
/* Compute S0 */
      S = (a0b0 & HALFWORDMASK)*2 + (currentT & HALFWORDMASK) +
        (C & HALFWORDMASK);
      carry = S >> (WORDSIZE/2);
      S = S & 0x0000FFFF;
/* Compute S1 */
      sum = (a0b1 & HALFWORDMASK)*2 + (a1b0 & HALFWORDMASK)*2 +
        (a0b0 >> (WORDSIZE/2))*2 + (currentT >> (WORDSIZE/2)) +
          (C >> (WORDSIZE/2)) + carry;
      carry = sum >> (WORDSIZE/2);
      S = S | (sum << (WORDSIZE/2));
/* Compute C0 */
      sum = (a0b1 >> (WORDSIZE/2))*2 + (a1b0 >> (WORDSIZE/2))*2 +
        (a1b1 & HALFWORDMASK)*2 + carry + carry2;
      carry = sum >> (WORDSIZE/2);
      C = sum & HALFWORDMASK;
/* Compute C1 */
      sum = (a1b1 >> (WORDSIZE/2))*2 + carry;
	  carry2 = sum >> (WORDSIZE/2);
      C = C | (sum << (WORDSIZE/2));
	  // printf("i = %d, j = %d, carry2 %x, carry %x, C %x, S %x\n", i, j, carry2, carry, C, S);
/* End inner product ends here */
      tval[i+j] = S;
    }
    tval[i+j] = C;
  }
/* clear leading zeros and set t->length */
  for (j = i = a->length * 2; i< 2*MODULUS; ++i)
      tval[i] = 0;
  for (i = j - 1; i >= 0; --i)
      if (tval[i]) break;
  t->length = ++i;
}
