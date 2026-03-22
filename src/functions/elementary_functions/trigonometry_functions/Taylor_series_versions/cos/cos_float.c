#include "algorithms.h"
#include <stdint.h>

float cos_float(float angle) {
    int8_t sign = 1;
    if (angle < 0) {
        angle = -angle;
    }
    while (angle > 2 * PI) {
        angle -= 2 * PI;
    }
    if (angle > PI) {
        angle -= PI;
        sign *= -1;
    }
    if (angle > PI / 2) {
        angle = PI - angle;
        sign *= -1;
    }
    if (angle > PI / 4) {
        return sign * sin_float(PI/2 - angle);
    }

    float ans = 0;
    for (int n = 0; n < 10; n++) {
        if (n % 2 == 0) {
            ans += power_float(angle, 2*n) / (factorial_int64(2*n));
        } else {
            ans -= power_float(angle, 2*n) / (factorial_int64(2*n));
        }
    }

    return sign*ans;
}
