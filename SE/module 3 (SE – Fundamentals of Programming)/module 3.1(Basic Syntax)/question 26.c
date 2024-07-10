#include <stdio.h>

int main() {
    char choice;
    float fahrenheit, celsius;

    do {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("Temperature in Celsius: %.2f\n", celsius);

        printf("Do you want to convert another temperature? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
