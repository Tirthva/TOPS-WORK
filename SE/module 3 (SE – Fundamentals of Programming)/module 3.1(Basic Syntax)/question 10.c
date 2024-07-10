#include <stdio.h>

float Area(float w, float l, float h) {
    return 2 * (w * l + h * l + h * w);
}

int main() {
    float width, length, height;
    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);
    
     printf("Enter the  length of the rectangular prism: ");
    scanf("%f", &length);
    
     printf("Enter the  height of the rectangular prism: ");
    scanf("%f", &height);

    float a = Area(width, length, height);

    printf("Surface Area of the rectangular prism is: %.2f\n", a);

    return 0;
}

