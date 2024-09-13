#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;  
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 10; 
    } else {
        bill = 100 * 5 + 100 * 10 + (units - 200) * 15; 
    }
    printf("Your electricity bill for %d units is: Rs.%.2f", units, bill);

    return 0;  
}
