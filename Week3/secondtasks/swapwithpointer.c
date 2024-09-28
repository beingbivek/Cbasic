#include<stdio.h>

void swap(int *c, int *d);

int main(){
    int A = 10, B = 20;
    printf("A = %d and B = %d\n",A,B);
    swap(&A,&B);
    printf("A = %d and B = %d\n",A,B);
}

void swap(int *c,int *d){
    int s = *c;
    *c = *d;
    *d = s;
}