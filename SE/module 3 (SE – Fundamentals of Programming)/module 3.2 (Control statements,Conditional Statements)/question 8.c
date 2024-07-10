#include <stdio.h>

int main() {
    float height_cm;

    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height_cm);

    if (height_cm < 150) {
        printf("The person is Short.\n");
    } else if (height_cm >= 150 && height_cm < 170) {
        printf("The person is Average.\n");
    } else if (height_cm >= 170 && height_cm < 190) {
        printf("The person is Tall.\n");
    } else {
        printf("The person is Very Tall.\n");
    }

    return 0;
}

