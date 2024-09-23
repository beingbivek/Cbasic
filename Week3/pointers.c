/*
Pointer - Variable that stores memory address


*/

#include<stdio.h>

int sum(int *a,int *b);

int main(){
    int a=10;
    int b = 20;
    int *ptr = &a; // & sign returns memory address value
    printf("%p",&a); // %p displays meomory address
    printf("%p",ptr); // ptr only gives memory address
    printf("%p",*ptr); // *ptr returns a value in that memory address

    int c = sum(&a,&b); //calling by reference
    printf("%d",c);

}

int sum(int *a, int*b){
    return *a + *b;
}