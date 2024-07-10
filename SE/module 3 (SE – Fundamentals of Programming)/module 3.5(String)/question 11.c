#include <stdio.h>

int main() {
    char sentence[1000];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - 'a' + 'A';
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] - 'A' + 'a';
        }
        i++; 
    }

    printf("Modified sentence: %s", sentence);

    return 0;
}

