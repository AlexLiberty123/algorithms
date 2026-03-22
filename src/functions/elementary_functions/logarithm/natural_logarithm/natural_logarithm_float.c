#include "algorithms.h"
#include <stdint.h>

float natural_logarithm_float(float a) {
    DoubleBits bits;
    bits.d = (double) a;
    int exponent = ((bits.i >> 52) & 0x7FF) - 1023;
    uint64_t mantissa_bits = (bits.i & 0x000FFFFFFFFFFFFF) | (1023ULL << 52);

    DoubleBits m_conv;
    m_conv.i = mantissa_bits;
    float mantissa = m_conv.d;

    float y = (mantissa - 1) / (mantissa + 1);
    float ans = 0;
    for (int i = 0; i < 6; i++) { ans += power_float(y, 2 * i + 1) / (2 * i + 1); }

    return 2 * ans + exponent * LN2;
}
