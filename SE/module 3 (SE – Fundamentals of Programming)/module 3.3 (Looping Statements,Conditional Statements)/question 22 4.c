#include <stdio.h>

int main() {
    int  i, n;
    float sum = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);
        } else {
            sum += (float)i / (i + 1);
        }
    }

    printf("Sum of the series  = %.2f\n", sum);

    return 0;
}

