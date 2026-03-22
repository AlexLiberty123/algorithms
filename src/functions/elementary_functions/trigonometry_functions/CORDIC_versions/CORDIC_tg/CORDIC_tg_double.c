#include "algorithms.h"

double CORDIC_tg_double(double angle) { return CORDIC_sin_double(angle) / CORDIC_cos_double(angle); }
