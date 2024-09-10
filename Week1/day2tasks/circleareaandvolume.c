#include<stdio.h>

#define PI 3.14

void main(){
    float area, volume, radius, height;
    printf("Enter Radius of circle :");
    scanf("%f",&radius);
    printf("Enter height of the container :");
    scanf("%f",&height);
    area = PI * radius * radius;
    volume = area * height;
    printf("Area of the circe is %1.2f and Volume of the container is %1.2f",area,volume);
}