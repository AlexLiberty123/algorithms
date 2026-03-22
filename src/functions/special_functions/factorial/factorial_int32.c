#include "algorithms.h"
#include <stdint.h>

int32_t factorial_int32(int32_t number) {
    if (number <= 1) {
        return 1;
    }

    return number * factorial_int32(number - 1);
}
