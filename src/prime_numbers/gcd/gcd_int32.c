#include "algorithms.h"
#include <stdint.h>

int32_t gcd_int32(int32_t number_1, int32_t number_2) {
    while (number_2 != 0) {
        int32_t t = number_2;
        number_2 = number_1 % number_2;
        number_1 = t;
    }

    return number_1;
}
