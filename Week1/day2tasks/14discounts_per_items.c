#include <stdio.h>

int main() {
    int quantity;
    float price_per_item, total_price, discount = 0;

    printf("Enter the quantity of items: ");
    scanf("%d", &quantity);
    printf("Enter the price per item: ");
    scanf("%f", &price_per_item);

    total_price = quantity * price_per_item;

    if (quantity >= 1 && quantity <= 10) {
        discount = total_price * 0.05; 
    } else if (quantity >= 11 && quantity <= 50) {
        discount = total_price * 0.10;  
    } else if (quantity > 50) {
        discount = total_price * 0.15;
    }
    printf("Total is Rs.%1.2f\n",total_price);

    total_price -= discount;
    printf("Discount Rs.%1.2f\n",discount);


    printf("Total price after discount is: %.2f", total_price);

    return 0;  
}
