#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

bool binary_search_int64(int64_t *input, int64_t searched, int64_t size, int64_t *ind) {
    int64_t left = 0; int64_t right = size - 1; int64_t mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (searched > input[mid]) { left = mid + 1; }
        else if (searched < input[mid]) { right = mid - 1;}
        else { *ind = mid; return true; }
    }

    *ind = -1;
    return false;
}
