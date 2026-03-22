#include "algorithms.h"
#include <stdint.h>

float sin_float(float angle) {
    int8_t sign = 1;
    if (angle >= 0) {
        sign = 1;
    } else {
        sign = -1;
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
    }
    if (angle > PI / 4) {
        return sign * cos_float(PI/2 - angle);
    }

    float ans = 0;
    for (int n = 0; n < 10; n++) {
        if (n % 2 == 0) {
            ans += power_float(angle, 2*n + 1) / (factorial_int64(2*n + 1));
        } else {
            ans -= power_float(angle, 2*n + 1) / (factorial_int64(2*n + 1));
        }
    }

    return sign*ans;
}
