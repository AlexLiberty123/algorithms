#include "algorithms.h"

float CORDIC_ctg_float(float angle) { return CORDIC_cos_float(angle) / CORDIC_sin_float(angle); }
