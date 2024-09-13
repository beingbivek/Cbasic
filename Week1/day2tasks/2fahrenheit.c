#include<stdio.h>

void main(){
    float c,f;
    printf("Enter Celsius :");
    scanf("%f",&c);
    f = (c * 9 / 5) + 32;
    printf("Converted Farenheit is %1.2f",f);
}