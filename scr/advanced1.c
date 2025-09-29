#include "../include/advanced1.h"

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int modulo(int a, int b) {
    if(b == 0) return 0;
    return a % b;
}
