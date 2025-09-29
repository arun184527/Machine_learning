#include <stdio.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "power.h"
#include "advanced1.h"
#include "advanced2.h"
#include "trigonometry.h"
#include "loganithm.h"

int main() 
{
    printf("Add: %d\n", add(5, 3));
    printf("Subtract: %d\n", subtract(5, 3));
    printf("Multiply: %d\n", multiply(5, 3));
    printf("Divide: %d\n", divide(5, 3));
    printf("Power: %d\n", power(2, 3));
    printf("Factorial: %d\n", factorial(5));
    printf("Modulo: %d\n", modulo(10, 3));
    printf("GCD: %d\n", gcd(12, 18));
    printf("LCM: %d\n", lcm(12, 18));
    printf("Sin(0.5): %.2f\n", sine(0.5));
    printf("Cos(0.5): %.2f\n", cosine(0.5));
    printf("Tan(0.5): %.2f\n", tangent(0.5));
    printf("Log10(100): %.2f\n", logarithm(100));
    printf("Ln(2.71828): %.2f\n", naturalLog(2.71828));
    return 0;
}
