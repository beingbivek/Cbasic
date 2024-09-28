#include<stdio.h>

int fibo(int);

int main(){
    int value;//,s,a =0,b=1,c;
    printf("Enter natural number: ");
    scanf("%d",&value);
    
    
    for(int i = 0;i<=value;i++){
        printf("%d\n",fibo(i));
        // c=a+b;
        // printf("%d\n",a);
        // a = b;
        // b = c;
    }
    // fibo(value);
    return 0;
}

int fibo(int a){
    if(a <= 1){
        return a;
    }else{
        // c=a+b;
        // printf("%d\n",c);
        // a = b;
        // b = c;
        // printf("%d mathiko\n",a);
        // xn= xn-1 + xn-2
        // fibo(a) = fibo(a-1) + fibo(a-2);
        int result = fibo(a-1) + fibo(a-2);
        // printf("%d a\n",a);
        // printf("%d r\n",result);
        return result;
    }
}
/*
Fibonacci series:
0 1 1 2 3 5 8 13 21, 34, 55, 89, 144, 233, 377

1st loop:
0

2nd loop:
1

3rd loop: 0 + 1
1

4th loop: 1 + 1
2
*/