#include "algorithms.h"
#include <stdint.h>

int64_t fibonacci_numbers_int64(int64_t number) {
    return (power_double(GOLDEN_RATIO, number) - power_double(-GOLDEN_RATIO, -number)) / (2*GOLDEN_RATIO-1);
}
