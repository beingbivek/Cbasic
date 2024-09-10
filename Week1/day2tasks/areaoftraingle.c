#include<stdio.h>

void main(){
    float base, height, area;
    printf("Enter Base :");
    scanf("%f",&base);
    printf("Enter height :");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("Area of given traingle is %f",area);
}