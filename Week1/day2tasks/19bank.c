#include <stdio.h>

int balance = 15000, pin = 2024;

int main() {
    // Bank app
    int user_input, amount, lockcode;
    printf("Welcome to Nepal Youth Commercial Banking\nEnter Your Pin: ");
    scanf("%d",&lockcode);

    if (lockcode == pin){
        
    printf("\nChoose option(1-3)\n1. Add fund/deposit\n2. withdraw funds\n3. Check Balance\n");
    scanf("%d",&user_input);
    
    if (user_input == 1){
        printf("Enter Balance to add fund: ");
        scanf("%d",&amount);
        if (amount >= 0){
            balance += amount;
            printf("Your amount of %d has been added successfully. and your new balance is: %d",amount, balance);
        }else{
            printf("Please enter valid amount.");
        }
    }else if(user_input == 2){
        printf("Enter Balance to Withdraw: ");
        scanf("%d",&amount);
        if (amount < balance){
            balance -= amount;
            printf("Your amount of %d has been deducted and your new balance is Rs.%d",amount,balance);
        }else{
            printf("Enter valid Amount");
        }
    }else if(user_input == 3){
        printf("Your balance is Rs.%d.",balance);
    }else{
        printf("Invalid Option");
    }
    }else{
        printf("Invalid Pin Try Again!");
    }
    
    

    return 0;
}
