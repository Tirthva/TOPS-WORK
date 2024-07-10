#include <stdio.h>

int main() {
    int num1, num2, num3, min;
    
    printf("Enter first numbers : ");
    scanf("%d", &num1);
    
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    
    printf("Enter third numbers : ");
    scanf("%d", &num3);
    
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("The minimum number among %d, %d, and %d is: %d\n", num1, num2, num3, min);
    
    return 0;
}

