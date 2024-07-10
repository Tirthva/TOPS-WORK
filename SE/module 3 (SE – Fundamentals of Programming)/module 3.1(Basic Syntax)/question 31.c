#include <stdio.h>

int main() {
    float kilometers, meters;
    char choice;

    do {
        
        printf("Enter the number of kilometers: ");
        scanf("%f", &kilometers);

        
        meters = kilometers * 1000; 

        printf("%.2f kilometers is equal to : %.2f meters.\n", kilometers, meters);
        printf("Do you want to convert another value? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

