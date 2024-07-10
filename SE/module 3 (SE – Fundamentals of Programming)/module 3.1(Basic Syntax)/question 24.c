#include <stdio.h>

int main() {
    char names[5][50];
    float salaries[5], total_salary = 0, average_salary;
    int i;

    for (i = 0; i < 5; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        
        
        total_salary += salaries[i];
    }

        average_salary = total_salary / 5;
    
    printf("\nTotal salary of 5 employees: %.2f\n", total_salary);
    printf("Average salary of 5 employees: %.2f\n", average_salary);

    return 0;
}
2
