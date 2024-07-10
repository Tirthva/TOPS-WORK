#include <stdio.h>
int main(){
    int s, a;
    
   
    printf("Enter the side of the square: ");
    scanf("%d", &s);
    
    a = s * s;
    
    printf("Area of the Square side %d is: %d", s, a);
    return 0;
}
