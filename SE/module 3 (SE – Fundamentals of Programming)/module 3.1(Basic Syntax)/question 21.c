#include <stdio.h>

int main() {
    int num1, num2,num3, num4, temp;
      
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("\nAfter swapping (with using third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    printf("\nEnter first number for without useing 3rd veriable: ");
    scanf("%d", &num3);
    printf("Enter second number without useing 3rd veriable: ");
    scanf("%d", &num4);
    
    num3 = num3 + num4;
    num4 = num3 - num4;
    num3 = num3 - num4;
    
    printf("\nAfter swapping (without using third variable):\n");
    printf("First number: %d\n", num3);
    printf("Second number: %d\n", num4);
    
    
    
}

