#include "algorithms.h"

char* reverse(char* input, char* output, int size) {
    for (int i = 0; i < size; i++) {
        output[i] = input[size-1-i];
    }

    return output;
}
