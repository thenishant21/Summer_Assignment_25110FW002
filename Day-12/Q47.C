//Write a Function for Fibonacci Series
#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    
    fibonacci(number);
    
    return 0;
}