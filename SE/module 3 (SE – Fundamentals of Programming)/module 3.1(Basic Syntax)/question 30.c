#include <stdio.h>

int main() {
    char choice;
    int years, days;

    do {
        printf("Choose conversion:\n");
        printf("1. Years to days\n");
        printf("2. Days to years\n");
        printf("Enter your choice (1 or 2): ");
        scanf(" %c", &choice);

        
        switch(choice) {
            case '1':
                
                printf("Enter the number of years: ");
                scanf("%d", &years);
                days = years * 365;
                printf("%d years is equal to %d days.\n", years, days);
                break;
            case '2':
                
                printf("Enter the number of days: ");
                scanf("%d", &days);
                years = days / 365; 
                printf("%d days is equal to %d years.\n", days, years);
                break;
            default:
                printf("Invalid choice. Please enter either 1 or 2.\n");
        }

        printf("Do you want to perform another conversion? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

