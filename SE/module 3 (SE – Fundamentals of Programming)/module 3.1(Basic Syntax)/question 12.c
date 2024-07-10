#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    int total = num * 5;

    printf("Total number of apples required: %d\n", total);

    return 0;
}

