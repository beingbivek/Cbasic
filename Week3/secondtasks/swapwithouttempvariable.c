#include<stdio.h>

int main(){
    int A, B;
    printf("Enter number for A: ");
    scanf("%d",&A);
    printf("Enter number for B: ");
    scanf("%d",&B);
    printf("\nA = %d and B = %d\n",A,B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("A = %d and B = %d\n",A,B);
}