#include "algorithms.h"
#include <stdint.h>

double Bernoulli_number(int64_t number) {
    return -number*Riemann_zeta_function(1-number);
}
