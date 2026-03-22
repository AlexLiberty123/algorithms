#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

bool linear_search_int32(int32_t* input, int32_t searched, int32_t size, int32_t* ind) {
    for (int32_t i = 0; i < size; i++) {
        if (input[i] == searched) { *ind = i; return true; }
    }

    *ind = -1;
    return false;
}
