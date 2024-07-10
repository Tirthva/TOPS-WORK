#include <stdio.h>

int main() {
    int i , n , num = 1;
    
    printf("Enter the number : ");
    scanf("%d", &n);
    
     
    printf("%d ", num);
    
    for (i = 1; i < n; ++i) {
        if (i % 2 == 1) {
            num *= 2;
        }
		 else 
		{
            num *= 3;
        }
        printf("%d ", num);
    }
    
    printf("\n");
    
}

