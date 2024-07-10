#include <stdio.h>

int main() {
    int numbers[10];
    int even_i = 0, odd_i = 0;
    int sum_even = 0, sum_odd = 0;
    int i;
    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_i++;
            sum_even += numbers[i];
        } else {
            odd_i++;
            sum_odd += numbers[i];
        }
    }
    
    printf("\nResults:\n");
    printf("a. Count of even numbers: %d\n", even_i);
    printf("b. Count of odd numbers: %d\n", odd_i);
    printf("c. Sum of even numbers: %d\n", sum_even);
    printf("d. Sum of odd numbers: %d\n", sum_odd);
    
}

