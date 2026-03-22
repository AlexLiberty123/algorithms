#include "algorithms.h"

double sh_double(double angle) {
  return (power_double(E, angle) - power_double(E, -angle)) / 2;
}
