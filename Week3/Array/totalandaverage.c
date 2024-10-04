// WAP to read marks of 5 students calculate total marks and average marks

#include<stdio.h>

int main(){
    int mark[5],total = 0;
    float average;
    for(int i = 0;i<5;i++){
        printf("Enter mark of %dth student: ",i+1);
        scanf("%d",&mark[i]);
        printf("\n");
        total += mark[i];
    }
    average = total / 5;
    printf("The total marks is: %d\n",total);
    printf("The average marks is: %1.2f",average);
}