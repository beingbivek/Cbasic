// WAP to read two array of size 5 and store sum of these array on third array

#include<stdio.h>

int main(){
    int numlist1[5],numlist2[5],sum[2] = {0,0};
    for(int i = 0;i<5;i++){
        printf("Enter %d number for 1st array: ",i+1);
        scanf("%d",&numlist1[i]);
        printf("\n");
        sum[0] += numlist1[i];
    }
    for(int i = 0;i<5;i++){
        printf("Enter %d number for 2nd array: ",i+1);
        scanf("%d",&numlist2[i]);
        printf("\n");
        sum[1] += numlist2[i];
    }
    printf("Sum of 1st array is %d\n",sum[0]);
    printf("Sum of 2nd array is %d",sum[1]);
}