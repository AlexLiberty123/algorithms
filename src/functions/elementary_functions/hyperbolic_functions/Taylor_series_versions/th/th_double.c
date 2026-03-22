#include "algorithms.h"

double th_double(double angle) {
  return (power_double(E, 2*angle) - 1) / (power_double(E, 2*angle) + 1);
}
