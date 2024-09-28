#include<stdio.h>

int main(){
    int A = 10, B = 20;
    printf("A = %d and B = %d\n",A,B);
    int swap;
    swap = A;
    A = B;
    B = swap;
    printf("A = %d and B = %d",A,B);
}