#include <stdio.h>
void input(int array[], int size) {
	int i;
    printf("Enter %d elements of the array separated by spaces: ", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void ascending(int array[], int size) {
    int temp , i , j;
    for (i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void descending(int array[], int size) {
    int temp, i, j;
    for ( i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void a(int array[], int size) {
	int i;
    printf("Sorted array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];
    char order;

     input(array1, size);

     input(array2, size);

    printf("Enter 'a' for ascending or 'd' for descending to sort the arrays accordingly: ");
    scanf(" %c", &order);

    if (order == 'a' || order == 'A') {
        ascending(array1, size);
    } else if (order == 'd' || order == 'D') {
        descending(array1, size);
    }

    if (order == 'a' || order == 'A') {
        ascending(array2, size);
    } else if (order == 'd' || order == 'D') {
        descending(array2, size);
    }

    printf("Sorted array 1: ");
    a(array1, size);
    printf("Sorted array 2: ");
    a(array2, size);

    return 0;
}

