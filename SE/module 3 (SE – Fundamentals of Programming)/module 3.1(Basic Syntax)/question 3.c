#include <stdio.h>

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = 3.14 * pow(radius, 2);  
    circumference = 2 * 3.14 * radius; 

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);


}

