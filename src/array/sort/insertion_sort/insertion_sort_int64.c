#include "algorithms.h"
#include <stdbool.h>
#include <stdint.h>

void insertion_sort_int32(int32_t *input, int32_t size) {
    for (int i = 1; i < size; i++) {
        int32_t current_card = input[i];
        int j = i;
        while (j > 0 && input[j - 1] > current_card) {
            input[j] = input[j - 1];
            j--;
        }
        input[j] = current_card;
    }
}
