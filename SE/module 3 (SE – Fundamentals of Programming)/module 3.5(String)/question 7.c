#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", source);

    // Copying the string character by character
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Adding null terminator to mark the end of the string

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

