#include <stdio.h>

int main() {
    int n = 10;
    int number[10][10] = {0};
    int i, j, count = 1, k;

    for (k = 0; k < n / 2; k++) {
    	
        for (j = k; j < n - k; j++)
            number[k][j] = count++;

        for (i = k + 1; i < n - k; i++)
            number[i][n - 1 - k] = count++;

        for (j = n - 2 - k; j >= k; j--)
            number[n - 1 - k][j] = count++;
            
        for (i = n - 2 - k; i > k; i--)
            number[i][k] = count++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ",number[i][j]);
        }
        printf("\n");
    }

    return 0;
}

