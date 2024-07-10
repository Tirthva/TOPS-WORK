#include <stdio.h>

int main() {
    int i, j , n, sum = 0, m = 0;

   printf("Enter a number: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; ++i) {
        m = 0; 
        for (j = 1; j <= i; ++j) {
            m += j;
        }
        sum += m;
    }

    printf("Sum of the all number = %d\n", sum);
}

