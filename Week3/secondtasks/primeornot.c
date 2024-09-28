#include<stdio.h>

char prime(int);

int main(){
    int num;
    char p;
    printf("Enter no.: ");
    scanf("%d",&num);
    p = prime(num);
    if(p == 'y'){
        printf("The number %d is prime number.",num);
    }else{
        printf("The number %d is not prime number.",num);
    }
    return 0;
}

char prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if((n % i) == 0){
            c++;
        }
    }
    if(c <= 2){
        return 'y';
    }else{
        return 'n';
    }
}