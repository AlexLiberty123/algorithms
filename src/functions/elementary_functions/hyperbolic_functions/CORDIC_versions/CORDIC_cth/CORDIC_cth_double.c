#include "algorithms.h"

double CORDIC_cth_double(double angle) { return CORDIC_ch_double(angle) / CORDIC_sh_double(angle); }
