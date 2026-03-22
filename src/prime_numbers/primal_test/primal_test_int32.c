#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

bool primal_test_int32(int32_t number) {
    for (int32_t i = 2; i <= number/2; i++) {
        if (number % i == 0) { return false;}
    }

    return true;
}
