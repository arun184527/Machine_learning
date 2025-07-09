#include <stdio.h>
#include <string.h>
unsigned int binaryStringToUInt(char *binStr) {
    unsigned int num = 0;
    for (int i = 0; binStr[i] != '\0'; i++) {
        num = num << 1;
        if (binStr[i] == '1')
            num |= 1;
    }
    return num;
}
void printBits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
}
int main() {
    char binaryInput[40];
    unsigned int num, toggled, set_bit_after_toggle, or_with_bit;
    int n;
    printf("Enter a 32-bit binary number: ");
    scanf("%s", binaryInput);
    if (strlen(binaryInput) != 32) {
        printf("Error: Must be exactly 32 bits!\n");
        return 1;
    }
    num = binaryStringToUInt(binaryInput);
    printf("Enter bit position to operate on (0 to 31): ");
    scanf("%d", &n);
    if (n < 0 || n > 31) {
        printf("Invalid bit position!\n");
        return 1;
    }
    toggled = ~num;
    set_bit_after_toggle = toggled | (1 << n);
    or_with_bit = set_bit_after_toggle;
    printf("\nOriginal Number:        (Binary: ");
    printBits(num); printf(")\n");
    printf("Toggled All Bits:       (Binary: ");
    printBits(toggled); printf(")\n");
    printf("Only Bit %d Set:         (Binary: ", n);
    printBits(set_bit_after_toggle); printf(")\n");
    printf("OR with Only Bit %d:     (Binary: ", n);
    printBits(or_with_bit); printf(")\n");
    return 0;
}
