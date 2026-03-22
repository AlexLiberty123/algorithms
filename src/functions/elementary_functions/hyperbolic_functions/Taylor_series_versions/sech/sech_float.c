#include "algorithms.h"

float sech_float(float angle) {
  return 2 / (power_float(E, angle) + power_float(E, -angle));
}
