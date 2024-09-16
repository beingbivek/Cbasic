#include<stdio.h>
int main(){
    int num,fact = 1,i;
    printf("Enter number to find its factorial: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        fact *= i;
    }
    printf("The factorial is: %d",fact);
}