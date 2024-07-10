#include<stdio.h>
int main() {
   int i, j, k,m=0;

   printf("Enter the number of rows: ");
   scanf("%d", &k);

   for (i = 1; i <= k; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", m++);
      }
      
      printf("\n");

   }
}
