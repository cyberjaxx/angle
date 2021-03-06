// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/BlitResolve.frag.00000006.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kBlitResolve_frag_00000006[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x5d,0x94,0xdb,0x4f,0x55,0x57,
    0x10,0xc6,0xd7,0xb9,0xe3,0x11,0x50,0xb9,0x96,0x08,0x85,0x0a,0x89,0x06,0xe9,0xc1,
    0xa8,0x58,0xc1,0xd2,0x40,0xc4,0xb4,0xb4,0x88,0x5a,0x8d,0x31,0xde,0xef,0x02,0x89,
    0x50,0x39,0x4d,0x5a,0x20,0x51,0x2e,0x0f,0xb6,0x42,0x1a,0x5b,0xe1,0xc1,0x56,0x78,
    0xf0,0xc6,0x43,0x93,0x56,0x7c,0xd5,0x77,0xff,0x22,0x6b,0xdb,0xa4,0x49,0x67,0xf6,
    0xf9,0x0d,0x4e,0xce,0x49,0xe6,0xec,0x3d,0xdf,0x37,0x6b,0xbe,0x99,0xd9,0x6b,0xad,
    0x44,0xbc,0x39,0x13,0x42,0x2c,0x64,0x43,0x49,0x78,0x1d,0x0a,0xbf,0x2d,0x21,0x2e,
    0x48,0x08,0x1b,0x43,0x3a,0x7a,0x7e,0x3e,0x70,0x7c,0x20,0x97,0xff,0xf6,0x6a,0x6e,
    0x6f,0xc7,0x2e,0xe5,0xcb,0x43,0x22,0x8a,0x53,0x6e,0x93,0x78,0x49,0x79,0xaa,0xdd,
    0xbc,0x34,0x3c,0xaa,0x78,0x99,0xd8,0x88,0x58,0x5e,0x6c,0x4a,0x6c,0x4e,0x6c,0x41,
    0x6c,0x49,0x6c,0x45,0x6c,0x55,0x6c,0xb3,0xe4,0xd0,0x35,0x19,0xcd,0x2f,0x6f,0x65,
    0x91,0x9e,0xe6,0x0b,0xe1,0x8b,0x90,0x0a,0x95,0xd4,0xd2,0xcc,0xd3,0xb0,0x18,0x58,
    0x89,0xc3,0xe2,0x60,0x9b,0x1d,0x96,0x00,0xfb,0xc0,0x61,0x49,0xb0,0x7a,0x87,0xa5,
    0xc0,0x9a,0x1c,0x96,0x06,0x6b,0x71,0x58,0x06,0x6c,0x87,0xc3,0x4a,0xc0,0xda,0x1c,
    0xb6,0x01,0x6c,0x57,0xd4,0x57,0x62,0xbd,0x3e,0xed,0xf1,0xa8,0x3c,0xb7,0xd1,0x8f,
    0xf9,0x1f,0x39,0x5f,0x67,0xf6,0xa1,0xf3,0xf3,0xf8,0x31,0xfc,0x29,0x7c,0xcb,0x37,
    0x87,0x9f,0xc0,0x5f,0xc0,0x4f,0xe2,0x2f,0xe1,0xa7,0xf0,0x57,0xf0,0xd3,0xf8,0xab,
    0xf8,0xda,0x5b,0xa5,0x64,0x8d,0x47,0xf5,0x24,0xa2,0x7c,0xfa,0x5e,0x2d,0x31,0x69,
    0x66,0xa3,0x35,0xd4,0x8a,0x9f,0x61,0xbd,0xf2,0x35,0x12,0x99,0x85,0x57,0x4e,0xbf,
    0x5f,0x16,0xfd,0x26,0xf9,0x2f,0x65,0x9d,0xe2,0x07,0xf0,0xcb,0x5c,0xae,0x72,0xe2,
    0x4d,0xab,0x82,0x5c,0x21,0xaa,0xab,0x74,0x7d,0xee,0xe5,0x58,0x1a,0xcb,0xf2,0xac,
    0x70,0xa6,0x7a,0x55,0xcc,0xbf,0x12,0xbd,0xaa,0x28,0x6f,0x01,0xdb,0x49,0x2f,0x35,
    0xe4,0xd7,0xf8,0x5a,0xb8,0x8c,0xe3,0xeb,0xf1,0x95,0x6f,0x80,0xd7,0xfc,0x55,0x52,
    0x65,0x13,0x71,0x15,0xee,0xbb,0xd9,0xba,0x56,0xf6,0x83,0xf9,0x1d,0xac,0xd5,0x3e,
    0xbb,0xa9,0x37,0xe9,0xf8,0x1e,0xe6,0xd0,0x26,0x6a,0xca,0xf7,0x52,0x9b,0x59,0x8f,
    0x8b,0xed,0x77,0x33,0xfd,0x92,0xbc,0x8a,0xd7,0xc9,0xdb,0x20,0xef,0xb1,0xf0,0xfe,
    0x17,0x73,0xbe,0xae,0x39,0xc2,0xfb,0x20,0x73,0x51,0xff,0x68,0x51,0xfd,0x67,0xd8,
    0x27,0x1a,0x7f,0x16,0x8d,0xac,0xe3,0x2f,0xa3,0xa3,0xfc,0x30,0x7b,0xae,0x9b,0x7c,
    0xc3,0x9c,0xf7,0x84,0x8b,0x1f,0xe5,0xbb,0x1a,0x9f,0x87,0x37,0x7f,0xaa,0xc8,0x9f,
    0x2b,0x5a,0x7f,0x97,0xf3,0x6c,0xfc,0x42,0x11,0x7f,0x9f,0xbd,0x62,0xfc,0x52,0x11,
    0xff,0x90,0x19,0x1a,0xbf,0x52,0xc4,0x3f,0x16,0x9b,0x76,0xfc,0x2a,0xfc,0x3e,0x99,
    0x42,0x9c,0x79,0x07,0xb0,0xbf,0x05,0x49,0x45,0xfd,0x26,0xd7,0xef,0x28,0xdd,0xc7,
    0x47,0xe4,0xdb,0x95,0x53,0xe7,0x26,0xcc,0xe6,0x3f,0xca,0x59,0xd9,0x02,0xdf,0x2b,
    0x19,0x6a,0xb9,0x8f,0xaa,0xf9,0xc6,0xdd,0xc4,0xd4,0x81,0xcf,0x4a,0x8c,0xfa,0x5b,
    0x59,0x57,0xc7,0xba,0x06,0xce,0x69,0x35,0xfb,0xb3,0x9b,0x3d,0xd8,0x08,0xfe,0xbb,
    0xc4,0x34,0x71,0xb7,0x34,0xb2,0x37,0xdf,0x49,0xe5,0x2d,0xd4,0xf3,0xaf,0xc4,0x6f,
    0x73,0x77,0x9a,0xf6,0xa3,0xef,0xc7,0x64,0x9d,0xce,0x62,0x3b,0x9a,0xfa,0xbb,0xcd,
    0x7c,0x76,0x80,0x7f,0x2d,0x5e,0x26,0xd2,0x28,0x60,0x16,0xf7,0x8f,0xe4,0xb0,0x5c,
    0xfa,0x7c,0x2b,0x51,0x1a,0xf7,0x27,0x31,0x29,0xd6,0x34,0xbb,0x1e,0x76,0xd2,0x43,
    0xab,0xeb,0xa1,0x0d,0xdc,0x7a,0xf8,0x18,0xcc,0x7a,0x68,0x77,0x3d,0x28,0x97,0x13,
    0x6b,0x47,0x37,0xe7,0x7a,0xd8,0x8d,0x76,0xcc,0xf5,0xb0,0x07,0xdc,0x7a,0xf8,0x03,
    0xcc,0xe2,0xb4,0x07,0xcb,0xd5,0xee,0x7a,0x78,0x41,0x4c,0x0b,0x6b,0x72,0xae,0x87,
    0x7d,0xf4,0xd0,0xe1,0x7a,0xf8,0x04,0xdc,0x7a,0xd8,0x0f,0x66,0x3d,0x74,0xb9,0x1e,
    0x94,0xeb,0x14,0xeb,0x42,0xb7,0x93,0x7d,0xa4,0xba,0x9f,0xa2,0xfd,0xc2,0x9d,0x5f,
    0xad,0xd1,0x62,0xbb,0x5c,0x8d,0xaf,0x88,0x6b,0x67,0x5d,0x27,0xb1,0x07,0x89,0x3d,
    0x48,0xac,0x9e,0xd1,0x97,0xdc,0x2f,0xba,0xfe,0xa4,0x58,0x1f,0x9c,0xce,0x68,0x8d,
    0xbd,0xa8,0xdc,0x29,0x38,0xed,0x55,0xef,0x99,0xaf,0xe8,0xb5,0x9f,0x5e,0x35,0x7e,
    0x00,0x7c,0x8d,0x5e,0x0f,0x93,0x43,0xf1,0xbf,0x24,0xe6,0x10,0x39,0xac,0xdf,0xc3,
    0xf8,0x87,0xa8,0xab,0x8f,0x5c,0x83,0xd1,0xb7,0x2b,0xdc,0x43,0x17,0xa8,0xf3,0x04,
    0xd8,0x2b,0xce,0xee,0x5a,0x74,0x46,0x53,0x11,0x77,0x92,0x3e,0x4e,0x80,0xa5,0xa9,
    0x77,0x8d,0x58,0xdf,0xbb,0x6a,0x8d,0x71,0x56,0x4f,0xaf,0xf7,0x9f,0x8a,0xee,0xb5,
    0x73,0xf4,0x74,0x86,0x3a,0xf4,0x8e,0x3b,0x0f,0xfe,0x93,0xc4,0x6c,0x8c,0xea,0x29,
    0xac,0x53,0xbc,0x54,0x94,0x14,0xbb,0xe8,0xee,0xd5,0x0b,0x9c,0x6f,0xad,0xeb,0x12,
    0x9c,0xcd,0xec,0x0a,0xf9,0x2f,0xbb,0x99,0x5d,0x05,0x7f,0x43,0xdd,0xd7,0xc0,0x7a,
    0xdc,0x9e,0xb9,0x0e,0x5e,0xc3,0x9e,0x19,0x72,0x33,0x54,0xee,0x86,0xd8,0x10,0xfd,
    0xe9,0xfb,0x67,0x12,0x33,0x82,0xbe,0xf6,0x6e,0xdc,0x90,0xd3,0x19,0x43,0x67,0xd4,
    0xe9,0x7c,0x03,0x6e,0x3a,0xe3,0x4e,0x47,0xb9,0x5b,0x62,0xe3,0xe4,0xba,0x85,0x4e,
    0xde,0xe9,0x18,0x37,0xee,0x74,0xbe,0x43,0xa7,0xdf,0xe9,0x7c,0x0f,0x6e,0x3a,0x93,
    0x4e,0x47,0xb9,0x09,0xb1,0x49,0x72,0x4d,0xa0,0x33,0xe5,0x74,0x8c,0x9b,0x74,0x3a,
    0x77,0xd0,0x69,0x75,0x3a,0xd3,0xe0,0xa6,0x33,0xeb,0x74,0x94,0x9b,0x89,0xee,0xd5,
    0x42,0xae,0x19,0x74,0xe6,0x9c,0x8e,0x71,0xb3,0x4e,0xe7,0x07,0x74,0xee,0x3a,0x9d,
    0x1f,0xc1,0x4d,0x67,0xde,0xe9,0x28,0x77,0x4f,0x6c,0x9e,0x5c,0xf7,0xd0,0x59,0x70,
    0x3a,0xc6,0xcd,0x3b,0x9d,0x9f,0xd1,0xb9,0xef,0x74,0x7e,0x01,0x37,0x9d,0x45,0xa7,
    0xa3,0xdc,0x03,0xb1,0x45,0x72,0x3d,0x40,0x67,0xc9,0xe9,0x18,0xb7,0xe8,0x74,0x7e,
    0x45,0xe7,0xa1,0xd3,0xf9,0x0d,0xdc,0x74,0x96,0x9d,0x8e,0x72,0x8f,0xc4,0x96,0xc9,
    0xf5,0x08,0x9d,0x15,0xa7,0x63,0xdc,0xb2,0xd3,0x79,0x82,0xce,0x63,0xa7,0xf3,0x14,
    0xdc,0x74,0x9e,0x3b,0x1d,0xe5,0x9e,0x89,0x3d,0x27,0xd7,0x33,0x74,0x56,0x9d,0x8e,
    0x71,0xfa,0xfc,0x4f,0x4e,0xdf,0x7e,0xb1,0xff,0x01,0xcb,0xd6,0xd3,0x60,0xb4,0x0c,
    0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(push_constant)uniform PushConstants {
//
//             ivec2 offset;
//     vec2 stretch;
//     vec2 invSrcExtent;
//     int srcLayer;
//     int samples;
//     float invSamples;
//
//     int outputMask;
//
//     bool flipX;
//     bool flipY;
//     bool rotateXY;
// } params;
//
// layout(set = 0, binding = 0)uniform itexture2DMS color;
//
// layout(location = 0)out ivec4 colorOut0;
// layout(location = 1)out ivec4 colorOut1;
// layout(location = 2)out ivec4 colorOut2;
// layout(location = 3)out ivec4 colorOut3;
// layout(location = 4)out ivec4 colorOut4;
// layout(location = 5)out ivec4 colorOut5;
// layout(location = 6)out ivec4 colorOut6;
// layout(location = 7)out ivec4 colorOut7;
//
// void main()
// {
//
//             ivec2 srcImageCoords = ivec2(gl_FragCoord . xy);
//
//     srcImageCoords -= params . offset;
//
//     if(params . flipX)
//         srcImageCoords . x = - srcImageCoords . x;
//     if(params . flipY)
//         srcImageCoords . y = - srcImageCoords . y;
//     if(params . rotateXY)
//         srcImageCoords . xy = srcImageCoords . yx;
//
//             ivec4 colorValue = ivec4(0, 0, 0, 1);
//     for(int i = 0;i < params . samples;++ i)
//     {
//         colorValue += texelFetch(color, srcImageCoords, i);
//     }
//
//     colorValue = ivec4(round(colorValue * params . invSamples));
//
//     if((params . outputMask &(1 << 0))!= 0)
//     {
//         colorOut0 = colorValue;
//     }
//     if((params . outputMask &(1 << 1))!= 0)
//     {
//         colorOut1 = colorValue;
//     }
//     if((params . outputMask &(1 << 2))!= 0)
//     {
//         colorOut2 = colorValue;
//     }
//     if((params . outputMask &(1 << 3))!= 0)
//     {
//         colorOut3 = colorValue;
//     }
//     if((params . outputMask &(1 << 4))!= 0)
//     {
//         colorOut4 = colorValue;
//     }
//     if((params . outputMask &(1 << 5))!= 0)
//     {
//         colorOut5 = colorValue;
//     }
//     if((params . outputMask &(1 << 6))!= 0)
//     {
//         colorOut6 = colorValue;
//     }
//     if((params . outputMask &(1 << 7))!= 0)
//     {
//         colorOut7 = colorValue;
//     }
//
// }
