#include "algorithms.h"
#include <stdint.h>

int32_t fibonacci_numbers_int32(int32_t number) {
    return (power_float(GOLDEN_RATIO, number) - power_double(-GOLDEN_RATIO, -number)) / (2*GOLDEN_RATIO-1);
}
