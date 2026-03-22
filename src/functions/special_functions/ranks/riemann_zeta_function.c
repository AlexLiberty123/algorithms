#include "algorithms.h"
#include <stdint.h>

double Riemann_zeta_function(int64_t s) {
    return Dirichlet_eta_function(s) / (1 - power_double(2, 1 - s));
}
