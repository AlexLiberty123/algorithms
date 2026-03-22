#include "algorithms.h"
#include <stdint.h>

float binomial_coefficient_float(float n, int32_t k) {
    if (k == 0) { return 1; }
    else if (k < 0) { return 0; }
    else {
        float C = 1;
        for (int i = 0; i < k; i++) {
            C = C*(n-i);
        }
        return C/factorial_int32(k);
    }
}
