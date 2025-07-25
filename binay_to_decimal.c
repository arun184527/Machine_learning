#include <stdio.h>
long long binaryToDecimal(long long n)
{
    long long dec = 0;
    long long base = 1; 
    while (n > 0) {
        int last_digit = n % 10;
        dec += last_digit * base;
        base *= 2;
        n /= 10;
    }
    return dec;
}
int main(void)
{
    long long binary;
    printf("Enter a binary number (e.g. 1101): ");
    if (scanf("%lld", &binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    long long decimal = binaryToDecimal(binary);
    printf("%lld in binary = %lld in decimal\n", binary, decimal);
    return 0;
}