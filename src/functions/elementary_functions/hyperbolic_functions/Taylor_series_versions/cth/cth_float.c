#include "algorithms.h"

float cth_float(float angle) {
  return (power_float(E, 2*angle) + 1) / (power_float(E, 2*angle) - 1);
}
