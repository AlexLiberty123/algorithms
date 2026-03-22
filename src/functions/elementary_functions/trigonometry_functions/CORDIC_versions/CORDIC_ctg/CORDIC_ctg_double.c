#include "algorithms.h"

double CORDIC_ctg_double(double angle) { return CORDIC_cos_double(angle) / CORDIC_sin_double(angle); }
