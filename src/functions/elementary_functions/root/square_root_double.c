#include "algorithms.h"

double square_root_double(double number) {
    double S = number / 2;
    for (int i = 0; i < 64; i++) {
        S = (S + number/S) / 2;
    }

    return S;
}
