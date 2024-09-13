#include<stdio.h>

void main(){
    float p,t,r,si;
    printf("Enter Principle :");
    scanf("%f",&p);
    printf("Enter Time (Years) :");
    scanf("%f",&t);
    printf("Enter Rate :");
    scanf("%f",&r);
    si = ( p * t * r ) / 100 ;
    printf("The Simple Interest is %f",si);
}