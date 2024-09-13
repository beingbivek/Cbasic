#include <stdio.h>

int main() {
    int age;
    char has_license;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a valid driving license? (Y/N): ");
    scanf("%c", &has_license); 

    if (age >= 21 && (has_license == 'Y' || has_license == 'y')) {
        printf("You can rent a car.\n");
    } else {
        printf("You cannot rent a car.\n");
    }

    return 0; 
}
