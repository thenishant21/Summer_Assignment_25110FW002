//Write a Function to Find Maximum of Two Numbers
#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = findMax(num1, num2);
    printf("Maximum of %d and %d is %d\n", num1, num2, max);
    return 0;
}