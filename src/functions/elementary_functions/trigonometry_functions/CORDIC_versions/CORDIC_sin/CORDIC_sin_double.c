#include "algorithms.h"
#include <stdint.h>

double CORDIC_sin_double(double angle) {
    while (angle > 2 * PI) { angle -= 2.0 * PI; }
    if (angle < 0) { angle += 2.0 * PI; }

    int sign_Y = 1;

    if (angle > PI / 2.0 && angle <= PI) { angle = PI - angle; }
    else if (angle > PI && angle <= 3.0 * PI / 2.0) { angle = angle - PI; sign_Y = -1; }
    else if (angle > 3.0 * PI / 2.0) { angle = 2.0 * PI - angle; sign_Y = -1; }

    double X = 1.0;
    double X_old;
    double Y = 0.0;
    double Z = angle;
    double pow2 = 1.0;
    double current_angle;
    int8_t dir;

    for (int i = 0; i < 100; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old - (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTG_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        pow2 /= 2.0;
    }

    return sign_Y*Y*K_CIRCLE;
}
