#include <stdio.h>

int main() {
    char choice;
    float month, days;

    do {
        printf("Enter Days : ");
        scanf("%f", & days);

        month = days / 30;

        printf("days in months: %.2f\n", month);

        printf("Do you want to convert another days in month? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
