#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a number: ");
    scanf("%[^\n]", str);

    printf("Individual characters of the string in reverse order: ");

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }

    printf("\n");

    return 0;
}

