#include <stdio.h>

int main() {
    int rows = 5; 
    int cols = 10; 
	int count = 1; 

    
    for (int i = 0; i < rows; i++) {
      
        for (int j = 0; j < cols; j++) {
           
            if (count < 10)
                printf("0%d ", count);
            else
                printf("%d ", count);
            count++; 
        }
        printf("\n");
    }

    return 0;
}

