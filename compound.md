#include <stdio.h>
#include <math.h>
int main(void) 
{
    double principal, rate, time, amount, compoundInterest;
    int n;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (%%): ");
    scanf("%lf", &rate);
    printf("Enter time (years): ");
    scanf("%lf", &time);
    printf("Enter compounding frequency per year (e.g., 1=annually, 4=quarterly): ");
    scanf("%d", &n);
    rate /= 100.0;
    amount = principal * pow(1 + rate / n, n * time);
    compoundInterest = amount - principal;
    printf("\nFinal Amount (A): %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compoundInterest);
    return 0;
}
