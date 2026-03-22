#include "algorithms.h"
#include <stdint.h>

float CORDIC_cos_float(float angle) {
    while (angle > 2 * PI) { angle -= 2.0 * PI; }
    if (angle < 0) { angle += 2.0 * PI; }

    int sign_X = 1;

    if (angle > PI / 2.0 && angle <= PI) { angle = PI - angle; sign_X = -1; }
    else if (angle > PI && angle <= 3.0 * PI / 2.0) { angle = angle - PI; sign_X = -1; }
    else if (angle > 3.0 * PI / 2.0) { angle = 2.0 * PI - angle; }

    float X = 1.0;
    float X_old;
    float Y = 0.0;
    float Z = angle;
    float pow2 = 1.0;
    int8_t dir;

    for (int i = 0; i < 50; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old - (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        Z = Z - (dir * ARCTG_TABLE[i]);
        pow2 /= 2.0;
    }

    return sign_X*X*K_CIRCLE;
}
