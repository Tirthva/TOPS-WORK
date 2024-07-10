#include <stdio.h>

int main() {
    float salary, rsalary, inpre, lonin;//salary, remaining salary, insurance premium, loan installment

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    inpre = salary * 0.10;
   rsalary = salary - inpre;

    lonin = rsalary * 0.10;
   rsalary-= lonin;

    printf("Monthly salary after deducting insurance premium and loan installment:\n");
    printf("Salary: rs%.2f\n", salary);
    printf("Insurance Premium (10%%): rs%.2f\n", inpre);
    printf("Loan Installment (10%%): rs%.2f\n", lonin);
    printf("Remaining Salary: rs%.2f\n", rsalary);

}

