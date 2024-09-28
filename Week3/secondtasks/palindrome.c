#include<stdio.h>

int palindrome(int);

int main(){
    int num,pnum;
    printf("Enter a no. above 9 to find palindrome: ");
    scanf("%d",&num);
    // printf("%d",num % 10);

    pnum = palindrome(num);
    if(pnum == num){
        printf("The number %d is a palindrome.",num);
    }else{
        printf("The number %d is not a palindrome.",num);
    }
}

int palindrome(int n){
    int a = 0;
    while(n >= 1){
        a = (a * 10) + (n % 10);
        n = (n - (n % 10))/10; // use this instead: n /= 10
    }
    return a;
}