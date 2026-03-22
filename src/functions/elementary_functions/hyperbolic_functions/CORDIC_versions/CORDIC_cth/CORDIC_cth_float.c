#include "algorithms.h"

float CORDIC_cth_float(float angle) { return CORDIC_ch_float(angle) / CORDIC_sh_float(angle); }
