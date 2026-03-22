#include "algorithms.h"
#include <stdint.h>
#include <stdbool.h>

void bubble_sort_int32(int32_t* input, int32_t size) {
   bool sorted = true;
   int32_t old;
   while(sorted) {
       sorted = false;
       for (int i = 0; i < size - 1; i++) {
           if (input[i] > input[i + 1]) {
               old = input[i];
               input[i] = input[i + 1];
               input[i + 1] = old;
               sorted = true;
           }
       }
       if (!sorted) { return; }
   }
}
