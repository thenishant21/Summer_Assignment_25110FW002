//Write a program to Recursive sum of digits
#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d", num, sumOfDigits(num));
    return 0;
}

