#include "algorithms.h"
#include <stdint.h>

int64_t gcd_int64(int64_t number_1, int64_t number_2) {
        while (number_2 != 0) {
        int64_t t = number_2;
        number_2 = number_1 % number_2;
        number_1 = t;
    }

    return number_1;
}
