#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    char choice;
    double number1, number2;

    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1, 2, 3, 4): ");
    scanf("%c", &choice);

    printf("Enter first operand: ");
    scanf("%lf", &number1);
    printf("Enter second operand: ");
    scanf("%lf", &number2);

    switch (choice) {
        case '1':
            printf("Result: %.2lf\n", add(number1,number2));
            break;
        case '2':
            printf("Result: %.2lf\n", subtract(number1, number2));
            break;
        case '3':
            printf("Result: %.2lf\n", multiply(number1,number2));
            break;
        case '4':
            printf("Result: %.2lf\n", divide(number1, number2));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

