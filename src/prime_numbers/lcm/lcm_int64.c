#include "algorithms.h"
#include <stdint.h>

int64_t lcm_int64(int64_t number_1, int64_t number_2) {
    return (number_1*number_2)/gcd_int64(number_1, number_2);
}
