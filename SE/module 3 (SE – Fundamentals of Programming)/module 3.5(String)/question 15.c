#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], smallest[1000], largest[1000];
    int i = 0, j = 0, length;
    int smallest_length = 0, largest_length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] == '\0') {
            break; 
        }

        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            smallest[j] = largest[j] = str[i];
            j++;
            i++;
        }
        smallest[j] = largest[j] = '\0';

        if (strlen(smallest) < strlen(smallest)) {
            strcpy(smallest, smallest);
        }
        if (strlen(largest) > strlen(largest)) {
            strcpy(largest, largest);
        }

        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

