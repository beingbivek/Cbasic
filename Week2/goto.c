#include<stdio.h>

int main(){
    int pin = 1111, attempts=0,input;

    retry:
    printf("Enter Pin: ");
    scanf("%d",&attempts);

    if (pin == input)
    {
        printf("Your pin is correct!");
    }else{
        attempts++;
        printf("Invalid Pin, Attempt %d of 3\n",attempts);
        if(attempts < 3){
            goto retry;
        }else{
            printf("Too many attempts, Try again later!");
        }
    }
    
}