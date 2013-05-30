//
// Copyright (c) 2002-2013 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// mathutil.h: Math and bit manipulation functions.

#ifndef LIBGLESV2_MATHUTIL_H_
#define LIBGLESV2_MATHUTIL_H_

#include "common/system.h"
#include "common/debug.h"

#ifdef _WINDOWS_
#include <intrin.h>
#endif

namespace gl
{
struct Vector4
{
    Vector4() {}
    Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

    float x;
    float y;
    float z;
    float w;
};

inline bool isPow2(int x)
{
    return (x & (x - 1)) == 0 && (x != 0);
}

inline int log2(int x)
{
    int r = 0;
    while ((x >> r) > 1) r++;
    return r;
}

inline unsigned int ceilPow2(unsigned int x)
{
    if (x != 0) x--;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x++;

    return x;
}

template<typename T, typename MIN, typename MAX>
inline T clamp(T x, MIN min, MAX max)
{
    // Since NaNs fail all comparison tests, a NaN value will default to min
    return x > min ? (x > max ? max : x) : min;
}

inline float clamp01(float x)
{
    return clamp(x, 0.0f, 1.0f);
}

template<const int n>
inline unsigned int unorm(float x)
{
    const unsigned int max = 0xFFFFFFFF >> (32 - n);

    if (x > 1)
    {
        return max;
    }
    else if (x < 0)
    {
        return 0;
    }
    else
    {
        return (unsigned int)(max * x + 0.5f);
    }
}

inline bool supportsSSE2()
{
    static bool checked = false;
    static bool supports = false;

    if (checked)
    {
        return supports;
    }

    int info[4];
    __cpuid(info, 0);

    if (info[0] >= 1)
    {
        __cpuid(info, 1);

        supports = (info[3] >> 26) & 1;
    }

    checked = true;

    return supports;
}

template <typename destType, typename sourceType>
destType bitCast(const sourceType &source)
{
    META_ASSERT(sizeof(destType) >= sizeof(sourceType));

    destType output;
    memcpy(&output, &source, sizeof(sourceType));
    return output;
}

inline unsigned short float32ToFloat16(float fp32)
{
    unsigned int fp32i = (unsigned int&)fp32;
    unsigned int sign = (fp32i & 0x80000000) >> 16;
    unsigned int abs = fp32i & 0x7FFFFFFF;

    if(abs > 0x47FFEFFF)   // Infinity
    {
        return sign | 0x7FFF;
    }
    else if(abs < 0x38800000)   // Denormal
    {
        unsigned int mantissa = (abs & 0x007FFFFF) | 0x00800000;
        int e = 113 - (abs >> 23);

        if(e < 24)
        {
            abs = mantissa >> e;
        }
        else
        {
            abs = 0;
        }

        return sign | (abs + 0x00000FFF + ((abs >> 13) & 1)) >> 13;
    }
    else
    {
        return sign | (abs + 0xC8000000 + 0x00000FFF + ((abs >> 13) & 1)) >> 13;
    }
}

float float16ToFloat32(unsigned short h);

unsigned int convertRGBFloatsTo999E5(float red, float green, float blue);
void convert999E5toRGBFloats(unsigned int input, float *red, float *green, float *blue);

inline unsigned short float32ToFloat11(float fp32)
{
    const unsigned int float32MantissaMask = 0x7FFFFF;
    const unsigned int float32ExponentMask = 0x7F800000;
    const unsigned int float32SignMask = 0x80000000;
    const unsigned int float32ValueMask = ~float32SignMask;
    const unsigned int float32ExponentFirstBit = 23;
    const unsigned int float32ExponentBias = 127;

    const unsigned short float11Max = 0x7BF;
    const unsigned short float11MantissaMask = 0x3F;
    const unsigned short float11ExponentMask = 0x7C0;
    const unsigned short float11BitMask = 0x7FF;
    const unsigned int float11ExponentBias = 14;

    const unsigned int float32Maxfloat11 = 0x477E0000;
    const unsigned int float32Minfloat11 = 0x38800000;

    const unsigned int float32Bits = bitCast<unsigned int>(fp32);
    const bool float32Sign = (float32Bits & float32SignMask) == float32SignMask;

    unsigned int float32Val = float32Bits & float32ValueMask;

    if ((float32Val & float32ExponentMask) == float32ExponentMask)
    {
        // INF or NAN
        if ((float32Val & float32MantissaMask) != 0)
        {
            return float11ExponentMask | (((float32Val >> 17) | (float32Val >> 11) | (float32Val >> 6) | (float32Val)) & float11MantissaMask);
        }
        else if (float32Sign)
        {
            // -INF is clamped to 0 since float11 is positive only
            return 0;
        }
        else
        {
            return float11ExponentMask;
        }
    }
    else if (float32Sign)
    {
        // float11 is positive only, so clamp to zero
        return 0;
    }
    else if (float32Val > float32Maxfloat11)
    {
        // The number is too large to be represented as a float11, set to max
        return float11Max;
    }
    else
    {
        if (float32Val < float32Minfloat11)
        {
            // The number is too small to be represented as a normalized float11
            // Convert it to a denormalized value.
            const unsigned int shift = (float32ExponentBias - float11ExponentBias) - (float32Val >> float32ExponentFirstBit);
            float32Val = ((1 << float32ExponentFirstBit) | (float32Val & float32MantissaMask)) >> shift;
        }
        else
        {
            // Rebias the exponent to represent the value as a normalized float11
            float32Val += 0xC8000000;
        }

        return ((float32Val + 0xFFFF + ((float32Val >> 17) & 1)) >> 17) & float11BitMask;
    }
}

inline unsigned short float32ToFloat10(float fp32)
{
    const unsigned int float32MantissaMask = 0x7FFFFF;
    const unsigned int float32ExponentMask = 0x7F800000;
    const unsigned int float32SignMask = 0x80000000;
    const unsigned int float32ValueMask = ~float32SignMask;
    const unsigned int float32ExponentFirstBit = 23;
    const unsigned int float32ExponentBias = 127;

    const unsigned short float10Max = 0x3DF;
    const unsigned short float10MantissaMask = 0x1F;
    const unsigned short float10ExponentMask = 0x3E0;
    const unsigned short float10BitMask = 0x3FF;
    const unsigned int float10ExponentBias = 14;

    const unsigned int float32Maxfloat10 = 0x477C0000;
    const unsigned int float32Minfloat10 = 0x38800000;

    const unsigned int float32Bits = bitCast<unsigned int>(fp32);
    const bool float32Sign = (float32Bits & float32SignMask) == float32SignMask;

    unsigned int float32Val = float32Bits & float32ValueMask;

    if ((float32Val & float32ExponentMask) == float32ExponentMask)
    {
        // INF or NAN
        if ((float32Val & float32MantissaMask) != 0)
        {
            return float10ExponentMask | (((float32Val >> 18) | (float32Val >> 13) | (float32Val >> 3) | (float32Val)) & float10MantissaMask);
        }
        else if (float32Sign)
        {
            // -INF is clamped to 0 since float11 is positive only
            return 0;
        }
        else
        {
            return float10ExponentMask;
        }
    }
    else if (float32Sign)
    {
        // float10 is positive only, so clamp to zero
        return 0;
    }
    else if (float32Val > float32Maxfloat10)
    {
        // The number is too large to be represented as a float11, set to max
        return float10Max;
    }
    else
    {
        if (float32Val < float32Minfloat10)
        {
            // The number is too small to be represented as a normalized float11
            // Convert it to a denormalized value.
            const unsigned int shift = (float32ExponentBias - float10ExponentBias) - (float32Val >> float32ExponentFirstBit);
            float32Val = ((1 << float32ExponentFirstBit) | (float32Val & float32MantissaMask)) >> shift;
        }
        else
        {
            // Rebias the exponent to represent the value as a normalized float11
            float32Val += 0xC8000000;
        }

        return ((float32Val + 0x1FFFF + ((float32Val >> 18) & 1)) >> 18) & float10BitMask;
    }
}

inline float float11ToFloat32(unsigned short fp11)
{
    unsigned short exponent = (fp11 >> 6) & 0x1F;
    unsigned short mantissa = fp11 & 0x3F;

    if (exponent == 0x1F)
    {
        // INF or NAN
        return bitCast<float>(0x7f800000 | (mantissa << 17));
    }
    else
    {
        if (exponent != 0)
        {
            // normalized
        }
        else if (mantissa != 0)
        {
            // The value is denormalized
            exponent = 1;

            do
            {
                exponent--;
                mantissa <<= 1;
            }
            while ((mantissa & 0x40) == 0);

            mantissa = mantissa & 0x3F;
        }
        else // The value is zero
        {
            exponent = -112;
        }

        return bitCast<float>(((exponent + 112) << 23) | (mantissa << 17));
    }
}

inline float float10ToFloat32(unsigned short fp11)
{
    unsigned short exponent = (fp11 >> 5) & 0x1F;
    unsigned short mantissa = fp11 & 0x1F;

    if (exponent == 0x1F)
    {
        // INF or NAN
        return bitCast<float>(0x7f800000 | (mantissa << 17));
    }
    else
    {
        if (exponent != 0)
        {
            // normalized
        }
        else if (mantissa != 0)
        {
            // The value is denormalized
            exponent = 1;

            do
            {
                exponent--;
                mantissa <<= 1;
            }
            while ((mantissa & 0x20) == 0);

            mantissa = mantissa & 0x1F;
        }
        else // The value is zero
        {
            exponent = -112;
        }

        return bitCast<float>(((exponent + 112) << 23) | (mantissa << 18));
    }
}

}

namespace rx
{

struct Range
{
    Range() {}
    Range(int lo, int hi) : start(lo), end(hi) { ASSERT(lo <= hi); }

    int start;
    int end;
};

template <typename T>
T roundUp(const T value, const T alignment)
{
    return value + alignment - 1 - (value - 1) % alignment;
}

}

#endif   // LIBGLESV2_MATHUTIL_H_
