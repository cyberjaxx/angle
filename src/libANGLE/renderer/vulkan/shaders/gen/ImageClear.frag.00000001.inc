// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageClear.frag.00000001.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageClear_frag_00000001[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x2d,0x50,0x3d,0x0b,0xc2,0x50,
    0x10,0x3b,0x5b,0xfb,0xad,0xd6,0x2a,0xea,0x56,0x2a,0x1d,0x85,0xe2,0xa0,0x22,0x88,
    0x82,0x53,0x1d,0xba,0xf9,0x0b,0x04,0x17,0x07,0x5d,0xf4,0xc7,0xbb,0x08,0x26,0x6d,
    0x1e,0xdc,0xcb,0xbb,0x5c,0x2e,0x77,0xad,0xeb,0x94,0x81,0x59,0xcf,0x62,0x0b,0x6d,
    0x62,0xdd,0xc9,0xcc,0x01,0x63,0x96,0x98,0xdf,0x62,0xdd,0x5c,0x9b,0xea,0xfd,0xb9,
    0x57,0x9b,0xed,0x9a,0xf5,0x91,0xb9,0xad,0x8e,0xb5,0x14,0x9a,0x3e,0x90,0xf1,0xbc,
    0x3d,0x5e,0xe4,0x23,0xc4,0x18,0x1a,0x72,0x01,0xfb,0xf1,0x22,0x97,0xab,0xe7,0x62,
    0x1e,0xe6,0x75,0xa7,0x14,0xd6,0xd0,0x93,0x73,0x10,0x53,0xdc,0xc4,0x25,0x38,0x57,
    0xdc,0x1c,0x2f,0x1f,0x58,0x20,0x16,0xf0,0xa3,0xaf,0xaf,0xb9,0x05,0xee,0x10,0xe8,
    0x6a,0xde,0x41,0x79,0x24,0x2e,0x97,0x77,0x20,0x6d,0xa2,0x5a,0x2c,0x2d,0xf3,0x81,
    0xb8,0x19,0xf2,0xa1,0xe6,0x70,0xd7,0x95,0xf2,0x91,0xf6,0x64,0x7f,0x2a,0x2d,0xfd,
    0x76,0xf8,0x16,0x47,0x7b,0x98,0xe6,0x7d,0xc1,0x78,0xc0,0x33,0xee,0xb4,0xfd,0x17,
    0x9d,0x3f,0x3d,0x8e,0xda,0x3d,0x13,0x7f,0x42,0x47,0xa4,0xfc,0x87,0x89,0x7b,0xc4,
    0x1f,0x05,0x9a,0xa0,0x93,0x94,0x01,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// layout(push_constant)uniform PushConstants {
//        vec4 clearColor;
// } params;
//
// layout(location = 1)out vec4 colorOut;
//
// void main()
// {
//     colorOut = params . clearColor;
// }
