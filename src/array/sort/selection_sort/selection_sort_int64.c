#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

void selection_sort_int64(int64_t* input, int64_t size) {
    int64_t temp; int64_t min_index;
    for (int j = 0; j < size; j++) {
        min_index = j;
        for (int i = j; i < size; i++) {
            if (input[i] < input[min_index]) { min_index = i; }
        }
        temp = input[j];
        input[j] = input[min_index];
        input[min_index] = temp;
    }

    return;
}
