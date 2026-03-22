#include "algorithms.h"

float square_root_float(float number) {
    float S = number / 2;
    for (int i = 0; i < 64; i++) {
        S = (S + number/S) / 2;
    }

    return S;
}
