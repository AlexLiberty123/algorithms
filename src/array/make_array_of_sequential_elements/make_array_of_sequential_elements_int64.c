#include "algorithms.h"
#include <stdint.h>

int64_t* make_array_of_sequential_elements_int64(int64_t* output, int64_t start, int64_t final) {
    int64_t count = final - start + 1;
    for (int64_t i = start; i < 1 + count; i++) {
        output[i] = i + start;
    }

    return output;
}
