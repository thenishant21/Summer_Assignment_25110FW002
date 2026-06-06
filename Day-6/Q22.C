// Write a program to Convert binary to decimal
#include <stdio.h>
#include <math.h>

int main() {
    long long binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal = %lld", decimal);
    return 0;
}
