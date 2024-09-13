#include<stdio.h>

int pi = 3.14;

void main(){
    float volume, radius, height;
    printf("Enter radius of cylinder :");
    scanf("%f",&radius);
    printf("Enter height of cylinder :");
    scanf("%f",&height);
    volume = pi * radius * radius * height;
    printf("The Volume of the cylinder is %f",volume);
}