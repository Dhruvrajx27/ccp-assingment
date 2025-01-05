#include <stdio.h>

int main() {
    long long binary;
    int octal = 0, decimal = 0, i = 1, remainder;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * i;
        binary /= 10;
        i *= 2;
    }

    // Convert decimal to octal
    i = 1;
    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
        i *= 10;
    }

    // Output the octal number
    printf("The octal equivalent is: %d\n", octal);

    return 0;
}
