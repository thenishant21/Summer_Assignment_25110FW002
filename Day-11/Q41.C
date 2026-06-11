//Write a Function to Find Sum of Two Numbers
#include <stdio.h>

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = findSum(num1, num2);
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}