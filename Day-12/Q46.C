//Write a Function to Check Armstrong Number
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    
    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // Calculate the sum of each digit raised to the power of the number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return original == sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}

