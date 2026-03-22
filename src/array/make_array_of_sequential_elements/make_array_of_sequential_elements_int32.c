#include "algorithms.h"
#include <stdint.h>

int32_t* make_array_of_sequential_elements_int32(int32_t* output, int32_t start, int32_t final) {
    int32_t count = final - start + 1;
    for (int32_t i = 0; i < count; i++) {
        output[i] = i + start;
    }

    return output;
}
