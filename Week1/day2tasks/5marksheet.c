#include<stdio.h>

void main(){
    printf("Welcome this program calculates your total score, average score and percentage.\n");
    int physics, english, maths, nepali, social;
    float sum, avg, percentage;
    printf("Enter marks of Physics :");
    scanf("%d",&physics);
    printf("Enter marks of English :");
    scanf("%d",&english);
    printf("Enter marks of Math :");
    scanf("%d",&maths);
    printf("Enter marks of Nepali :");
    scanf("%d",&nepali);
    printf("Enter marks of Social :");
    scanf("%d",&social);
    sum = physics + english + maths + nepali + social;
    avg = sum / 5;
    percentage = (sum / 500) * 100;
    printf("Total Marks obtained : %f \n Average Marks : %1.2f \n Percentage :%1.2f",sum,avg,percentage);
}