//Write a Program to Find Second Largest Element
#include <stdio.h>

int main() {
    int arr[5], i, largest, second_largest;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest element is %d", second_largest);

    return 0;
}
