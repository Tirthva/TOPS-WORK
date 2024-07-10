#include <stdio.h>

int main() {
    float p, rate, time, amount, cinterest;//CInterest = Compound Interest

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter annual interest rate (in percentage): %");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    amount = p * pow(1 + rate / 100), time);

    cinterest = amount - p;

    printf("\nAmount after %.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", cinterest);

    return 0;
}

