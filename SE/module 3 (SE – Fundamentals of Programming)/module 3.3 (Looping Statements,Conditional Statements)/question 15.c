#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    int number;

    printf("Enter 10 numbers:\n");

    
    while (i < 10) {
        scanf("%d", &number);
        sum += number;
        i++;
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

}

