#include <stdio.h>

float area(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the  width of the rectangle: ");
    scanf("%f",  &width);
    
    
    float c = area(length, width);

    printf("Circumference of the rectangle is: %.2f\n", c);

    return 0;
}

