#include <stdio.h>

int main() {
    int minutes, seconds, hours;
    char choice;

    do {
        printf("Enter the number of minutes: ");
        scanf("%d", &minutes);

        hours = minutes / 60;
        seconds = minutes * 60;

        printf("%d minutes is equal to: %d seconds.\n", minutes, seconds);
        printf("%d minutes is equal to: %d hours.\n", minutes, hours);

        
        printf("Do you want to convert another value? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
