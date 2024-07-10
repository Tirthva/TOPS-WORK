#include <stdio.h>

int main() {
    char choice;
   int year, month, days;

    do {
        printf("Enter year : ");
        scanf("%d", & year);

       month = year * 12;
       days = year * 365; 

        printf("year in months: %d month\n", month);
        printf("year in days: %d days\n", days);

        printf("Do you want to convert another days in month? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

