#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a number: ");
    scanf("%[^\n]", str);

    printf("Individual characters in the string: ");
    
    for (i = 0; str[i] != '\0'; i++) { // \0 NULL
        printf("%c ", str[i]);
    }

    printf("\n");

    return 0;
}

