#include "algorithms.h"

float CORDIC_tg_float(float angle) { return CORDIC_sin_float(angle) / CORDIC_cos_float(angle); }
