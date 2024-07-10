#include <stdio.h>

int findMax(int arr[], int size ) {
	int i , max;
    max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
	int maximum , size;
    int arr[] = {10, 5, 7, 15, 20, 3};
    size = sizeof(arr) / sizeof(arr[0]);
    
    maximum = findMax(arr, size);
    
    printf("The maximum number in the array is: %d\n", maximum);

    return 0;
}

