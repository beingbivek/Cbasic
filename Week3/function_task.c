#include<stdio.h>

int add(int,int);
void substract(int,int);
int multiply(int,int);
float divide(int,int);
int out();

int main(){
    int first, second, input, i = 1;
    char o;
    while(i == 1){
        printf("Choose option (1-4):\n");
    printf("1. Add\n2. Substract\n3. Multiply\n4. Divide\n");
    scanf("%d",&input);
    
    if(input <= 3 && input >0){
        printf("Enter first number: ");
    scanf("%d",&first);
    printf("Enter second number: ");
    scanf("%d",&second);
        switch (input)
        {
        case 1:
            // int sum = ;
            printf("The sum is %d\n",add(first,second));
            break;
        case 2:
            substract(first,second);
            break;
        case 3:
            // int mul = multiply(first,second);
            printf("The multiplicated value is %d\n",multiply(first,second));
            break;
        case 4:
            // float div = divide(first,second);
            printf("The Quotient is %d\n",divide(first,second));
            break;
        
        default:
            printf("Error!!!\n");
            break;
        }

    }else{
        printf("Invalid Input, Try Again!\n");
    }

    printf("Do you want to continue? (y/n): ");
    o = getchar();
    scanf(" %c",&o);
    if(o == 'n' || o == 'N'){
        // return 0;
        i = 0;
    }
    }
    
}

int add(int a, int b){
    return a + b;
}
void substract(int a, int b){
    printf("The Sustracted result is: %d\n",a-b);
}
int multiply(int a, int b){
    return a * b;
}
float divide(int a, int b){
    return a / b;
}