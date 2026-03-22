#include "algorithms.h"

float cosech_float(float angle) {
  return 2 / (power_float(E, angle) - power_float(E, -angle));
}
