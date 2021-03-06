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

unsigned char gRestrictedCert[] = {
    0x00, 0x05, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0xcf, 0x22, 0xe0, 0xa4, 0xe7, 0xd3, 0xc0, 0xec, 0x19,  
    0xa0, 0xcb, 0xea, 0x2f, 0x7f, 0xb8, 0x01, 0xd9, 0x40, 0xa9,
    0x00, 0xca, 0x8b, 0x29, 0xc7, 0x6e, 0x22, 0xe4, 0xf4, 0xb1,
    0x20, 0x3f, 0xda, 0x7a, 0xc6, 0x05, 0xaa, 0xf0, 0x26, 0x81};

//W64 gRestrictedCopyOnceSinkKeys[] =
//{
//    W64i(0x57, 0xe8, 0xff, 0x00, 0xf3, 0xc6, 0xad, 0x30),
//    W64i(0xe1, 0xbc, 0x94, 0x03, 0x92, 0xeb, 0x60, 0xa0),
//    W64i(0x94, 0x62, 0xfd, 0xaf, 0xa6, 0xba, 0x37, 0x58),
//    W64i(0x5d, 0xb7, 0x09, 0xca, 0x19, 0x03, 0xb8, 0x4a),
//    W64i(0x2d, 0xf6, 0x11, 0x53, 0x32, 0x53, 0x3b, 0xa8),
//    W64i(0x16, 0x98, 0x85, 0xab, 0xb3, 0xb0, 0xc0, 0x67),
//    W64i(0xdc, 0x1d, 0x77, 0xa0, 0x86, 0x64, 0xc4, 0x4e),
//    W64i(0x50, 0x2a, 0xf1, 0xa3, 0xf5, 0x7e, 0xf8, 0xa9),
//    W64i(0x36, 0xba, 0x05, 0x4a, 0xc4, 0xa7, 0xc4, 0xdb),
//    W64i(0x2d, 0x82, 0x91, 0x94, 0xb0, 0x0c, 0xc9, 0x8c),
//    W64i(0x09, 0x77, 0x75, 0x2b, 0xa1, 0x89, 0x22, 0x65),
//    W64i(0x53, 0x8e, 0xb5, 0x2c, 0xd3, 0x39, 0x47, 0x91)    
//};
//
//W64 gRestrictedCopyNoMoreSinkKeys[] =
//{
//    W64i(0x3c, 0x21, 0x8f, 0xb4, 0xe9, 0x69, 0x67, 0xdc),
//    W64i(0xa1, 0x9e, 0xaf, 0x8f, 0x2b, 0x27, 0x5c, 0x56),
//    W64i(0xd6, 0xd2, 0xce, 0x15, 0x5a, 0x8b, 0x47, 0xbe),
//    W64i(0x33, 0xb4, 0xb1, 0x0a, 0xdd, 0xcf, 0x15, 0x2c),
//    W64i(0x10, 0x2a, 0xc9, 0x15, 0x53, 0x52, 0x62, 0x88),
//    W64i(0xd9, 0xb4, 0x7b, 0x75, 0x22, 0xb5, 0x02, 0xdd),
//    W64i(0xb1, 0x5a, 0x2e, 0x12, 0xf7, 0x7c, 0x97, 0xad),
//    W64i(0x5f, 0x71, 0xf2, 0xd1, 0x40, 0x5e, 0xb4, 0x79),
//    W64i(0xf8, 0x8c, 0xfc, 0x8a, 0xfd, 0xdd, 0x92, 0x49),
//    W64i(0xe9, 0xda, 0xf9, 0x80, 0xbc, 0x11, 0x67, 0xc7),
//    W64i(0x6e, 0x0c, 0xb1, 0xad, 0x0a, 0x5c, 0x75, 0x5a),
//    W64i(0x20, 0x0d, 0x7d, 0x90, 0x20, 0xdf, 0x88, 0x9f)
//};
//
//W64 gRestrictedCopyOnceSourceKeys[] =
//{
//    W64i(0x5c, 0x9e, 0x0e, 0x7b, 0x8b, 0x69, 0xab, 0xf5),
//    W64i(0x54, 0x36, 0xf8, 0xb5, 0x40, 0x53, 0xbc, 0x80),
//    W64i(0x82, 0xc7, 0x6c, 0xfc, 0xd8, 0x6d, 0x9e, 0x82),
//    W64i(0xfd, 0x49, 0x24, 0x58, 0xb8, 0xb3, 0xa1, 0x66),
//    W64i(0x49, 0xd3, 0x85, 0xea, 0x87, 0x74, 0xc3, 0xe6),
//    W64i(0x28, 0xa7, 0x94, 0xa9, 0x31, 0x8c, 0xaa, 0xdf),
//    W64i(0x78, 0x2a, 0xfd, 0xc5, 0xe3, 0x14, 0xbd, 0x3d),
//    W64i(0x1c, 0x5c, 0x22, 0x82, 0x27, 0xa2, 0x56, 0x16),
//    W64i(0x5a, 0x41, 0x81, 0x76, 0xdb, 0xad, 0xd7, 0x9a),
//    W64i(0x1c, 0xa2, 0x43, 0xd6, 0x64, 0xa7, 0x83, 0x85),
//    W64i(0x73, 0x6f, 0x5e, 0x17, 0x74, 0xda, 0xc9, 0xe2),
//    W64i(0x42, 0xeb, 0xf8, 0x2f, 0x75, 0x66, 0xcb, 0xb4)
//};
//
//W64 gRestrictedCopyNoMoreSourceKeys[] = 
//{
//    W64i(0x93, 0x96, 0x9f, 0x6b, 0xba, 0xcb, 0x9b, 0x49),
//    W64i(0x00, 0xbd, 0xe3, 0x4a, 0x9c, 0x87, 0xb9, 0x3d),
//    W64i(0x73, 0xee, 0xb3, 0x74, 0x33, 0x79, 0xf7, 0xfc),
//    W64i(0x41, 0xe8, 0x44, 0x10, 0x95, 0x79, 0x4f, 0xaf),
//    W64i(0xff, 0xc6, 0x20, 0xf4, 0x61, 0x9b, 0x4d, 0x02),
//    W64i(0x08, 0x4c, 0x8f, 0xed, 0x10, 0x81, 0x6a, 0x88),
//    W64i(0x55, 0x07, 0xa7, 0x69, 0xd3, 0x3a, 0x87, 0xb2),
//    W64i(0x50, 0xb8, 0xd6, 0x27, 0x0b, 0x0f, 0x04, 0xfe),
//    W64i(0x5e, 0x0a, 0x45, 0xd0, 0x36, 0x67, 0x54, 0x41),
//    W64i(0x11, 0x29, 0x47, 0x8a, 0xe0, 0xbc, 0xec, 0xf5),
//    W64i(0xe6, 0xe3, 0xce, 0x7d, 0x44, 0x2c, 0xd8, 0x20),
//    W64i(0x61, 0x09, 0xa6, 0x5d, 0x79, 0x38, 0x17, 0x0e)
//};
