#include <stdio.h>

int main() {

    float income, tax = 0;

    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (income <= 10000) {
        tax = 0;
    } else if (income <= 50000) {
        tax = (income - 10000) * 0.10;
    } else if (income <= 100000) {
        tax = (income - 50000) * 0.20 + 4000;
    } else {
        tax = (income - 100000) * 0.30 + 14000;
    }

    printf("Your tax amount is: %1.2f for Rs.%1.2f", tax,income);

    return 0;
}
