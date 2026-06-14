//Write a Program to Find Frequency of an Element
#include <stdio.h>

int main() {
    int arr[5], i, key, frequency = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            frequency++;
        }
    }

    printf("Frequency of %d is %d", key, frequency);

    return 0;
}
