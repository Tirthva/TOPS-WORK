#include <stdio.h>

int main() {
    float expenses[5], total_expense = 0, average_expense;
    int i;

    for (i = 0; i < 5; ++i) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        
        total_expense += expenses[i];
    }

    average_expense = total_expense / 5;

    printf("\nAverage expense: %.2f\n", average_expense);

    return 0;
}

