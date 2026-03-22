#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

bool linear_search_int64(int64_t* input, int64_t searched, int64_t size, int64_t* ind) {
    for (int64_t i = 0; i < size; i++) {
        if (input[i] == searched) { *ind = i; return true; }
    }

    *ind = -1;
    return false;
}
