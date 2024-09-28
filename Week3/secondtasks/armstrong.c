#include<stdio.h>
#include<math.h>

int armstrong(int);

int count(int);

int main(){
    int num,anum;
    printf("Enter a no. to find armstrong or not: ");
    scanf("%d",&num);
    // printf("%d",num % 10);

    anum = armstrong(num);
    if(anum == num){
        printf("The number %d is Armstrong Number.",num);
    }else{
        printf("The number %d is not an Armstrong Number.",num);
    }
}

int armstrong(int n){
    int a = 0,c = count(n);
    while (n != 0)
    {
        a += pow((n % 10),c);
        // printf("%d b\n",a);
        n /= 10;
    }   
    // printf("%d",a);
    return a;
}

int count(int a){
    int c = 0;
    while(a != 0){
        a /= 10;
        c++;
    }
    return c;
}
