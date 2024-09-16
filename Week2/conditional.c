#include<stdio.h>
int main(){
    int a =10;

    if (a%2 == 0){
        printf("Even");
    }else{
        printf("odd");
    }

    // contional operator
    // ? :
    (a % 2 == 0) ? printf("Even") : printf("Odd"); // one line if
}