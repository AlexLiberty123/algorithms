# MyMath Library

This is a custom library in C that provides a set of useful mathematical functions, algorithms, and various constants.

**Features:**
*   **Mathematical Constants:** For example: E, PI, golden ratio, etc.
*   **Basic Functions:** For example: power, factorial, root finding.
*   **Algorithms:** For example: GCD, LCM finding, prime number generation.

## 1. Including the Library
In your source file (e.g., `main.c`), include the library header file:
```
#include "algorithms.h"
```
## 2. Compilation:
To compile your program with this library, you need to tell the gcc compiler where to find header files (-I) and the compiled library itself (-L and -l).
Example compilation command:
```
gcc main.c -I./include -L./ -lalgorithms -o game
```
### Flag Description:
    -I./include — path to the folder containing the algorithms.h file
    -L./ — path to the folder containing the library file libmymath.a (or libmymath.so)
    -lmymath — linking the library itself (the lib prefix and extension are implicit)
    -o game — name of the output executable file

## 3. Project Structure
    include/algorithms.h — header file with declarations.
    src/ — source code of functions.
