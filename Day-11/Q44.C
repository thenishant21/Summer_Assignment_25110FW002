// Write a Function to Find Factorial
#include <stdio.h>

int findFactorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * findFactorial(n - 1);
}

int main() {
    int n, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial = findFactorial(n);

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}
