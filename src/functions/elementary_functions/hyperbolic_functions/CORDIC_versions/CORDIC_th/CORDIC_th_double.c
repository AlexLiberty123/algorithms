#include "algorithms.h"

double CORDIC_th_double(double angle) { return CORDIC_sh_double(angle) / CORDIC_ch_double(angle); }
