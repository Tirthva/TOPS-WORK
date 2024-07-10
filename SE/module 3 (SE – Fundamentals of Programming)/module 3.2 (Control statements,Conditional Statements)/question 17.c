#include <stdio.h>
int canFormTriangle(int angle1, int angle2, int angle3) {
    
    if (angle1 + angle2 + angle3 == 180) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    if (canFormTriangle(angle1, angle2, angle3)) {
        printf("A triangle can be formed with angles %d, %d, and %d.\n", angle1, angle2, angle3);
    } else {
        printf("A triangle cannot be formed with angles %d, %d, and %d.\n", angle1, angle2, angle3);
    }

    return 0;
}

