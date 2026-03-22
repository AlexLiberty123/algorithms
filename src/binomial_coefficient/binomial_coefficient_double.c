#include "algorithms.h"
#include <stdint.h>

double binomial_coefficient_double(double n, int64_t k) {
    if (k == 0) { return 1; }
    else if (k < 0) { return 0; }
    else {
        double C = 1;
        for (int i = 0; i < k; i++) {
            C = C*(n-i);
        }
        return C/factorial_int64(k);
    }
}
