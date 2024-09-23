/*
Recursion:
calling the same function inside the same function
so termination condition is used.
*/

#include<stdio.h>

int factorial(int);

int main(){
    int num, fact;
    printf("Enter Number to find factorial: ");
    scanf("%d",&num);

    fact = factorial(num);
    printf("Factorial is: %d",fact);
}

int factorial(int a){
    if(a == 0){
        return 1;
    }else{
        return a * factorial(a-1);
    }
}