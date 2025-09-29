#include "../include/division.h"

int divide(int a, int b) {
    if (b == 0) return 0; // simple error check
    return a / b;
}

float divideFloat(float a, float b) {
    if (b == 0.0f) return 0.0f;
    return a / b;
}
