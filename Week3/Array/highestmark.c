// Write a C program that finds the highest score in an array of integer marks.

#include<stdio.h>

int main(){
    int num,highest = 0;
    printf("Enter how many numbers you are going to enter: ");
    scanf("%d",&num);
    int mark[num];
    for(int i = 0;i<num;i++){
        printf("Enter mark of %dth student: ",i+1);
        scanf("%d",&mark[i]);
        printf("\n");
        if(mark[i] > highest){
            highest = mark[i];
        }
    }
    printf("The highest marks is: %d",highest);
}