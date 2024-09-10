#include <stdio.h>
#include<math.h>

void main() {
    float ci, p, t, r;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter time in years: ");
    scanf("%f", &t);
    printf("Enter Rate: ");
    scanf("%f", &r);
    // Calculate compound interest
    ci = p * (pow(1 + (r / 100), t)) - p;
    printf("Compound Interest: %.2f\n", ci);
}
