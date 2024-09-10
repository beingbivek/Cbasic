#include<stdio.h>

void main(){
    float perimeter, length, breadth;
    printf("Enter length of rectangle :");
    scanf("%f",&length);
    printf("Enter breadth of rectangle :");
    scanf("%f",&breadth);
    perimeter = 2 * (length + breadth);
    printf("The perimeter of the rectangle is %1.2f",perimeter);
}