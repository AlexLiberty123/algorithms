#include "algorithms.h"
#include <stdint.h>

double power_double(double base, int64_t indicator) {
    if (indicator == 0) { return 1; }

    double ans = 1;
    if (indicator > 0) {
        for (int64_t i = 0; i < indicator; i++) {
            ans *= base;
        }
        return ans;
    } else {
        for (int64_t i = 0; i < -indicator; i++) {
            ans *= base;
        }
        return 1.0/ans;
    }
}
