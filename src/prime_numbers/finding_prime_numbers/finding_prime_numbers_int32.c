#include "algorithms.h"
#include <stdint.h>

int32_t finding_prime_numbers_int32(int32_t* output, int32_t start, int32_t final) {
    int32_t index = 0;
    for (int32_t number = start; number <= final; number++) {
        if (number <= 1) { continue; }

        int32_t count = 0;
        for (int32_t j = 2; j <= number / 2; j++) {
            if (number % j == 0) { count++; break; }
        }
        if (count == 0) {
            output[index] = number;
            index++;
        }
    }

    return index;
}
