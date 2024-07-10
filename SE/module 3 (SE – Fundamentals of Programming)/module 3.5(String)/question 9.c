#include <stdio.h>

int main() {
    char str[100];
    int max_chars = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[max_chars] != '\0') {
        max_chars++;
    }

    printf("Maximum number of characters in the string: %d\n", max_chars);

    return 0;
}

