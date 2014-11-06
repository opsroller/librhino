//#############################################################################
//## Copyright (c) 2004 Intel Corporation All Rights Reserved. 
//## 
//## The source code contained or described herein and all documents related to
//## the source code ("Material") are owned by Intel Corporation or its 
//## suppliers or licensors. Title to the Material remains with Intel 
//## Corporation or its suppliers and licensors. The Material contains trade 
//## secrets and proprietary and confidential information of Intel or its
//## suppliers and licensors. The Material is protected by worldwide copyright
//## and trade secret laws and treaty provisions. No part of the Material may 
//## be used, copied, reproduced, modified, published, uploaded, posted, 
//## transmitted, distributed, or disclosed in any way without Intel's prior 
//## express written permission.
//## 
//## No license under any patent, copyright, trade secret or other 
//## intellectual property right is granted to or conferred upon you by 
//## disclosure or delivery of the Materials, either expressly, by 
//## implication, inducement, estoppel or otherwise. Any license under such 
//## intellectual property rights must be express and approved by Intel in 
//## writing.
//#############################################################################

#ifndef __DTCP_FULL_AUTH_DEVICE_H__
#define __DTCP_FULL_AUTH_DEVICE_H__

/// \file
/// \brief Defines the parameters for a full authentication device.  (Uses the facsimile keys)
///
/// These values are not valid for a production device.  A DTCP licensee would need to 
/// use the values assigned to them by the DTLA rather than these values.

#include "DtcpConstants.h"

/// \brief Full auth certificate
static unsigned char gFullCert[] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x6c, 0x48, 0xfe, 0x72, 0x4c, 0xd4, 0xfe, 0x3b, 0xe7, 0x99,  
    0x10, 0xc8, 0xe0, 0x6d, 0x81, 0x4d, 0xe4, 0x2f, 0x13, 0x8b,
    0x85, 0x6d, 0xd9, 0x23, 0x4a, 0x33, 0xfa, 0x47, 0x5f, 0xd2,
    0x90, 0xfd, 0xbe, 0x08, 0x44, 0x74, 0xce, 0x21, 0x07, 0xb6,
    0x00, 0x86, 0x5a, 0x30, 0xe6, 0x42, 0x46, 0x80, 0xc6, 0xf2,
    0xcc, 0x3f, 0x08, 0x47, 0xac, 0x0f, 0x26, 0xaa, 0xca, 0xf1,
    0x00, 0x59, 0xa2, 0xb4, 0x87, 0xb9, 0x10, 0x9d, 0xcd, 0xeb,
    0x06, 0x54, 0x6f, 0x75, 0xaa, 0x4f, 0x52, 0x2c, 0x3c, 0xe7
};

/// \brief Copy once sink keys
static unsigned char gFullCopyOnceSinkKeys[DTCP_DEVICE_KEY_COUNT][DTCP_DEVICE_KEY_SIZE] =
{
    0x8d, 0x25, 0xc1, 0x24, 0xbb, 0xf5, 0x65, 0x71,
    0x14, 0xa9, 0x01, 0xc5, 0x54, 0x3a, 0x79, 0x52,
    0x03, 0xbb, 0x1f, 0x77, 0xea, 0xf8, 0xf3, 0x22,
    0x68, 0xa9, 0x71, 0xfb, 0xdd, 0x81, 0x8c, 0x15,
    0x9d, 0x61, 0x18, 0x3f, 0x4e, 0xcb, 0x41, 0x81,
    0xf0, 0x28, 0x93, 0xb0, 0xfb, 0x48, 0x72, 0x3b,
    0x29, 0xde, 0x2e, 0xe5, 0x1f, 0x41, 0xef, 0xe5,
    0x99, 0xbd, 0xfb, 0x85, 0x0d, 0x1c, 0x77, 0xdd,
    0xb3, 0xbe, 0xed, 0xb5, 0x9e, 0xd1, 0xfd, 0x34,
    0x5e, 0xeb, 0xc4, 0xcc, 0xbe, 0xd3, 0xa8, 0x23,
    0x1e, 0x83, 0x50, 0xb7, 0x2e, 0x95, 0x28, 0xdd,
    0x45, 0x54, 0xc7, 0x03, 0x14, 0xce, 0xb9, 0x64
};

/// \brief Copy no more sink keys
static unsigned char gFullCopyNoMoreSinkKeys[DTCP_DEVICE_KEY_COUNT][DTCP_DEVICE_KEY_SIZE] =
{
    0x38, 0x65, 0x5d, 0x5a, 0x4b, 0x56, 0xd1, 0xec,
    0xf1, 0x26, 0x20, 0xc3, 0xcc, 0x8a, 0xe4, 0xb4,
    0x38, 0x4e, 0x95, 0x29, 0x09, 0x3f, 0xc9, 0x65,
    0x61, 0x47, 0x89, 0x4c, 0xa0, 0xab, 0xda, 0x28,
    0x14, 0x86, 0x16, 0xbc, 0x9b, 0xf9, 0x54, 0x4f,
    0x77, 0xae, 0xa3, 0x39, 0x27, 0xa3, 0x0d, 0xbc,
    0xa4, 0x34, 0xcb, 0x3b, 0x22, 0x3f, 0xa2, 0xa4,
    0x67, 0x86, 0xfb, 0x50, 0x6e, 0x2e, 0x6c, 0x53,
    0x84, 0xfb, 0x27, 0x17, 0xb2, 0x57, 0x66, 0xd3,
    0x2c, 0x43, 0x89, 0x67, 0x57, 0xc2, 0x58, 0x25,
    0xb7, 0xa5, 0xcd, 0xb9, 0xec, 0x14, 0xea, 0xb0,
    0xbc, 0x18, 0x3d, 0x40, 0xe3, 0x3d, 0x18, 0x76
};

/// \brief Copy once source keys
static unsigned char gFullCopyOnceSourceKeys[DTCP_DEVICE_KEY_COUNT][DTCP_DEVICE_KEY_SIZE] =
{
    0x63, 0x86, 0xf1, 0x01, 0xf2, 0x60, 0x9b, 0xe1,
    0x6b, 0xb2, 0xbc, 0x66, 0xe5, 0xcc, 0x0e, 0x6c,
    0x95, 0x65, 0x0e, 0x99, 0x58, 0x93, 0x4c, 0x7c,
    0xe3, 0x98, 0x8c, 0x60, 0x5e, 0x98, 0x16, 0x31,
    0xcd, 0x02, 0x2d, 0x36, 0xf2, 0x6d, 0xa9, 0x4d,
    0x92, 0x67, 0x34, 0x67, 0x2a, 0xaa, 0xd7, 0x77,
    0x20, 0xa8, 0xd2, 0xa3, 0x1b, 0xd2, 0xf7, 0x6a,
    0x35, 0xaa, 0xeb, 0x5d, 0x39, 0x5c, 0x13, 0x6f,
    0x2c, 0xe3, 0xd5, 0x4c, 0xbc, 0x42, 0x74, 0x62,
    0xc8, 0xe8, 0x8d, 0x74, 0x19, 0xff, 0x6d, 0x0b,
    0xb2, 0x5e, 0xd2, 0xd4, 0x4c, 0xde, 0xb3, 0x2e,
    0x5d, 0xb3, 0x7b, 0x70, 0xae, 0x3b, 0x20, 0x9f
};

/// \brief Copy no more source keys
static unsigned char gFullCopyNoMoreSourceKeys[DTCP_DEVICE_KEY_COUNT][DTCP_DEVICE_KEY_SIZE] =
{
    0xf2, 0xb1, 0xc2, 0xed, 0x9b, 0x50, 0x0c, 0x19,
    0xf8, 0x88, 0x45, 0x3b, 0x32, 0xc5, 0x65, 0x28,
    0x48, 0x0c, 0x1e, 0x27, 0x8d, 0xad, 0x95, 0x6d,
    0x4c, 0x58, 0x13, 0x10, 0xbc, 0x23, 0xfb, 0x54,
    0xb3, 0x87, 0xf8, 0x2e, 0xda, 0x09, 0x83, 0x2c,
    0x99, 0xb0, 0x12, 0xc5, 0xa7, 0xf0, 0x1c, 0xd1,
    0x8c, 0x34, 0xb5, 0x78, 0x92, 0xaf, 0x86, 0x7a,
    0x85, 0xe0, 0xc4, 0x42, 0xfd, 0x1a, 0x1f, 0x66,
    0x9f, 0x93, 0x2c, 0x0c, 0xc3, 0xbb, 0x16, 0xd8,
    0xae, 0xf2, 0xea, 0xb6, 0x0d, 0xf1, 0x6a, 0xd7,
    0x14, 0x9e, 0x36, 0x93, 0x59, 0x9c, 0xb8, 0xc8,
    0xe6, 0x03, 0xe5, 0xfe, 0xd2, 0x38, 0x2a, 0xde
};

/// \brief Device's private key
static unsigned char gFullAuthDevicePrivateKey[] = 
{
    0x01, 0x07, 0x83, 0x15, 0x81, 0x27, 0xae, 0xe7, 0x11, 0x2d,   
    0xac, 0x5c, 0xc9, 0x61, 0xa5, 0xbc, 0xf8, 0x68, 0x12, 0x82
};

/// \brief Key selection vector
static int gFullKeySelectionVector = 0x0399;

#endif // __DTCP_FULL_AUTH_DEVICE_H__
