#include "algorithms.h"
#include <stdint.h>

double Dirichlet_eta_function(double s) {
    double eta_ans = 0;
    double pre_eta = 0;
    double minus = 1;
    for (int64_t n = 0; n < 22; n++) {
        pre_eta = 0;
        minus = 1;
        for (int64_t k = 0; k <= n; k++) {
            pre_eta += binomial_coefficient_double(n, k) * (minus / power_double(k + 1, s));
            minus *= -1;
        }
        pre_eta *= 1.0/(power_double(2, n + 1));
        eta_ans += pre_eta;
    }

    return eta_ans;
}
