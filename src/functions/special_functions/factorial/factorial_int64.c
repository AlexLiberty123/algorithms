#include "algorithms.h"
#include <stdint.h>

int64_t factorial_int64(int64_t number) {
    if (number <= 1) {
        return 1;
    }

    return number * factorial_int64(number - 1);
}
