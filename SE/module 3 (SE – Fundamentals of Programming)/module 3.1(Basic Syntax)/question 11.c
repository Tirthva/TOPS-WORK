#include <stdio.h>

float area(float a) {
    return 4 * a;
}

int main() {
    float b;
    printf("Enter the length of one side of the square: ");
    scanf("%f", &b);

    float c = area(b);

    printf("Circumference of the square is: %.2f\n", c);

    return 0;
}

