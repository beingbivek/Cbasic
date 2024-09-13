#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter the age of the first person: ");
    scanf("%d", &age1);
    printf("Enter the age of the second person: ");
    scanf("%d", &age2);
    printf("Enter the age of the third person: ");
    scanf("%d", &age3);

    if (age1 >= age2) {

        if (age1 >= age3) {
            printf("The first person is the oldest.\n");
        } else {
            printf("The third person is the oldest.\n");
        }
    } else {
        
        if (age2 >= age3) {
            printf("The second person is the oldest.\n");
        } else {
            printf("The third person is the oldest.\n");
        }
    }


    return 0; 
}
