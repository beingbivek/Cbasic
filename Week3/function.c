/*
Functions - Block of code to perform specific task

Syntax:
return_type function_name(parameter1, parameter2,.....){
    statement;
}

return_type = int, void, variable type
function_name = identifier


Types
- Library Funcitons
- User Defined Funcitons
    - Functions with no parameter and no return type
    - Functions with parameter but no return type
    - Functions with no parameter but return type
    - Functions with parameter and return type

Declaration
- Functions are declared above the main functions
- Method 1 : Declare above and write functions in sub function sections
- Method 2 : Write all the functions above the main functions

*/

#include<stdio.h>

//Function Declaration
float display();
void greet();

void add(int, int);

int sub();

int multiply(int, int);

int main(){
    //Calling a function
    float value = display();
    printf("%1.2f\n",value);
    greet();

    add(10,20); // 10,20 is arguments

    sub();

    int a,b,mul;
    printf("\nEnter 1st number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd number: ");
    scanf("%d",&b);
    mul = multiply(a,b);
    printf("\nMultiplication result is: %d",mul);
}

//Function Defination
float display(){
    printf("Hello World!\n");
    return 4.2;
}

void greet(){
    printf("Have a great day!\n");
}

void add(int a,int b){ // a and b are parameters
    printf("Sum is %d\n",a+b);
}

int sub(){
    printf("Substraction is %d",20-10);
}

int multiply(int x,int y){
    return x * y;
}