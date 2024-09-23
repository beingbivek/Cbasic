#include<stdio.h>

int doublesalary(int *a);

int main(){
    int salary,*sly = &salary,new;
    printf("Enter your salary: ");
    scanf("%d",sly);

    // int *sly = &salary;
    printf("Your original salary is: %d\n",*sly);

    
    new = doublesalary(sly);
    int *n = &new; // pointer should be initialized and given its value at the same time

    printf("Your new salary is: %d", *n);
}

int doublesalary(int *a){
    return *a * 2;
}