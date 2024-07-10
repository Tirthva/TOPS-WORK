#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int start, length , i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    if (start < 0 || start >= strlen(str) || length < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for ( i = 0; i < length && str[start + i] != '\0'; i++) {
        substr[i] = str[start + i];
    }
    substr[length] = '\0'; 

    printf("Substring: %s\n", substr);

    return 0;
}

