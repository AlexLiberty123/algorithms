#include "algorithms.h"
#include <stdint.h>

double natural_logarithm_double(double a) {
    DoubleBits bits;
    bits.d = a;
    int exponent = ((bits.i >> 52) & 0x7FF) - 1023;
    uint64_t mantissa_bits = (bits.i & 0x000FFFFFFFFFFFFF) | (1023ULL << 52);

    DoubleBits m_conv;
    m_conv.i = mantissa_bits;
    double mantissa = m_conv.d;

    double y = (mantissa - 1) / (mantissa + 1);
    double ans = 0;
    for (int i = 0; i < 16; i++) { ans += power_double(y, 2 * i + 1) / (2 * i + 1); }

    return 2 * ans + exponent * LN2;
}
