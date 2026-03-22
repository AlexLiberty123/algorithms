#include "algorithms.h"
#include <stdint.h>

double CORDIC_ch_double(double angle) {
    int64_t k = 0;
    if (angle < 0) { angle = -angle; }
    if (angle > 20) { return power_double(E, angle) / 2.0; }
    while (angle > 1.118) { angle /= 2; k++; }

    double X_old;
    double Y_old;
    double X = 1.0;
    double Y = 0.0;
    double Z = angle;
    double pow2 = 0.5;
    double current_angle;
    int8_t dir;

    for (int i = 1; i < 101; i++) {
        if (Z > 0) { dir = 1; }
        else { dir = -1; }
        X_old = X;
        X = X_old + (dir * Y * pow2);
        Y = Y + (dir * X_old * pow2);
        if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
        else { current_angle = pow2; }
        Z = Z - (dir * current_angle);
        if (i == 4 || i == 13 || i == 40) {
            if (Z > 0) { dir = 1; }
            else { dir = -1; }
            X_old = X;
            X = X_old + (dir * Y * pow2);
            Y = Y + (dir * X_old * pow2);
            if (i <= 15) { current_angle = ARCTH_TABLE[i]; }
            else { current_angle = pow2; }
            Z = Z - (dir * current_angle);
        }
        pow2 /= 2.0;
    }
    X *= K_HYPER; Y *= K_HYPER;
    for (int i = 0; i < k; i++) { Y_old = Y; Y = 2 * X * Y; X = X * X + Y_old * Y_old; }
    return X;
}
