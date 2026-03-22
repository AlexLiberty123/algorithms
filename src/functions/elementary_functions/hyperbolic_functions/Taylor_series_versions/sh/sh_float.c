#include "algorithms.h"

float sh_float(float angle) {
  return (power_float(E, angle) - power_float(E, -angle)) / 2;
}
