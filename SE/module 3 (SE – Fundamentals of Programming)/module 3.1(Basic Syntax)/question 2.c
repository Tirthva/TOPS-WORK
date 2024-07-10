#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  

    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is undefined.\n");
                
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;  
            } else {
                printf("Error: Modulo by zero is undefined.\n");
            
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            
    }

    printf("Result: %.2lf\n", result);


}
