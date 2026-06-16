// Write a Program to Find Maximum Frequency Element
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 5};
    int n = 7;
    int max_freq = 0, max_element = 0;
    int i, j, freq;

    for(i = 0; i < n; i++) {
        freq = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }
        if(freq > max_freq) {
            max_freq = freq;
            max_element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d", max_element);

    return 0;
}