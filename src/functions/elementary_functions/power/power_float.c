#include "algorithms.h"
#include <stdint.h>

float power_float(float base, int32_t indicator) {
    if (indicator == 0) { return 1; }

    float ans = 1;
    if (indicator > 0) {
        for (int32_t i = 0; i < indicator; i++) {
            ans *= base;
        }
        return ans;
    } else {
        for (int32_t i = 0; i < -indicator; i++) {
            ans *= base;
        }
        return 1.0/ans;
    }
}
