#include <stdio.h>

int main() {
    char str[100];
    int words = 0 , i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            words++;
        }
    }

    printf("Total number of words in the string: %d\n", words);

    return 0;
}

