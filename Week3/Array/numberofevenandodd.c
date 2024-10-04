// WAP to read an array and count total no of even and odd numbers

#include<stdio.h>

int main(){
    int num,evencount = 0,oddcount = 0;
    printf("How many number you want to input: ");
    scanf("%d",&num);
    int numlist[num];
    for(int i = 0;i<=num-1;i++){
        printf("Enter %dth number: ",i+1);
        scanf("%d",&numlist[i]);
        printf("\n");
    }
    for(int i=0;i<=num-1;i++){
        printf("%d\n",numlist[i]);
        if(numlist[i] % 2 == 0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    printf("The number of Even no.'s are: %d\n",evencount);
    printf("The number of Odd no.'s are: %d",oddcount);
}