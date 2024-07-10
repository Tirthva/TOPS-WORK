#include <stdio.h>

int main() {
    char names[5][50] ,i ; 

    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]); 
    }
    printf("\nNames of the students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}

