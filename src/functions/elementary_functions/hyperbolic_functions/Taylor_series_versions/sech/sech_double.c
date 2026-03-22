#include "algorithms.h"

double sech_double(double angle) {
  return 2 / (power_double(E, angle) + power_double(E, -angle));
}
