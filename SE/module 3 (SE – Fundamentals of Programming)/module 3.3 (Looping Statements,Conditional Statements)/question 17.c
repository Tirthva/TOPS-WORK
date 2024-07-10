#include <stdio.h>

int main() {
    int number, even = 0, odd = 0, i = 0;

    printf("Enter 5 numbers:\n");
    while (i < 5) {
        scanf("%d", &number);

        if (number % 2 == 0)
            even++;
        else
            odd++;

        i++;
    }

    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

    return 0;
}

