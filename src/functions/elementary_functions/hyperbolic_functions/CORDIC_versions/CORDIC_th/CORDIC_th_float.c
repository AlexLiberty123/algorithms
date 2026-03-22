#include "algorithms.h"

float CORDIC_th_float(float angle) { return CORDIC_sh_float(angle) / CORDIC_ch_float(angle); }
