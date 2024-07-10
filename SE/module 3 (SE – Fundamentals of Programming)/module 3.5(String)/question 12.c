#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[] = "is";
    int count = 0, length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(word);

    for (i = 0; str[i] != '\0'; i++) {
        if (strncmp(&str[i], word, length) == 0) {
            if (i == 0 || !isalpha(str[i - 1])) {
                if (str[i + length] == ' ' || str[i + length] == '\n' || str[i + length] == '\0')
                    count++;
            }
        }
    }

    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}

