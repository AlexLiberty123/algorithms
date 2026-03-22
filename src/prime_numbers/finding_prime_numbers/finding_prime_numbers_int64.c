#include "algorithms.h"
#include <stdint.h>

int64_t finding_prime_numbers_int64(int64_t* output, int64_t start, int64_t final) {
    int64_t index = 0;
    for (int64_t number = start; number <= final; number++) {
        if (number <= 1) { continue; }

        int64_t count = 0;
        for (int64_t j = 2; j <= number / 2; j++) {
            if (number % j == 0) { count++; break; }
        }
        if (count == 0) {
            output[index] = number;
            index++;
        }
    }

    return index;
}
