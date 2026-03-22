#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

bool binary_search_int32(int32_t *input, int32_t searched, int32_t size, int32_t *ind) {
    int32_t left = 0; int32_t right = size - 1; int32_t mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (searched > input[mid]) { left = mid + 1; }
        else if (searched < input[mid]) { right = mid - 1;}
        else { *ind = mid; return true; }
    }

    *ind = -1;
    return false;
}
