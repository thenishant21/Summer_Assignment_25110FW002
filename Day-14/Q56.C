//Write a Program to Find Duplicates in an Array
#include <stdio.h>

int main() {
    int arr[5], i, j, found;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicates are: ");
    for(i = 0; i < 5; i++) {
        found = 0;
        for(j = 0; j < 5; j++) {
            if(i != j && arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if(found == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
