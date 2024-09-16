#include<stdio.h>

int main(){
    int number;
    printf("Enter Number for days of week (1-7): ");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
        printf("This day is Sunday");
        break;
    case 2:
        printf("This day is Monday");
        break;
    case 3:
        printf("This day is Tuesday");
        break;
    case 4:
        printf("This day is Wednesday");
        break;
    case 5:
        printf("This day is Thrusday");
        break;
    case 6:
        printf("This day is Friday");
        break;
    case 7:
        printf("This day is Saturday");
        break;
    
    default:
        printf("Invalid Day Selected!");
        break;
    }
}