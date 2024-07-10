#include <stdio.h>

int main() {
    int numbers[5] , i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nNumber\tType\n");
    printf("--------------\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d\tEven\n", numbers[i]);
        } else {
            printf("%d\tOdd\n", numbers[i]);
        }
    }

    
}

