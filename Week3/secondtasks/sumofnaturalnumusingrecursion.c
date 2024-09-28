#include<stdio.h>

int sum(int);

int main(){
    int value, s;
    printf("Enter natural number: ");
    scanf("%d",&value);

    s = sum(value);
    printf("Sum is: %d",s);

}

int sum(int a){
    if(a == 0){
        return 1;
    }else{
        // printf("%d",a);
        return a + sum(a-1);
        // printf("%d mathi\n",a);
    }
}