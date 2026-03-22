#include "algorithms.h"
#include <stdint.h>

int32_t lcm_int32(int32_t number_1, int32_t number_2) {
    return (number_1*number_2)/gcd_int32(number_1, number_2);
}
