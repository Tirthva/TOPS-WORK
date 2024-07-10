#include <stdio.h>

float calculateInsurancePremium(float salary) {
    
    float premiumRate = 0.1; 
    float premium = salary * premiumRate;
    return premium;
}
int main() {
    float salary;
  
    printf("Enter the person's salary: ");
    scanf("%f", &salary);
    float insurancePremium = calculateInsurancePremium(salary);

    printf("The insurance premium based on the salary is: Rs%.2f\n", insurancePremium);

    return 0;
}
