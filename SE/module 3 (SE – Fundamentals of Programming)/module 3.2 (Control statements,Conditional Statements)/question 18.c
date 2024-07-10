#include <stdio.h>

int main() {
    float c, s;
    float profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &c);
    printf("Enter the selling price: ");
    scanf("%f", &s);

    if (s > c) {
        profit = s - c;
        printf("Profit: rs%.2f\n", profit);
    } else if (c > s) {
        loss = c - s;
        printf("Loss: rs%.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

