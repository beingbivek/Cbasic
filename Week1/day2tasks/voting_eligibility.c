#include <stdio.h>

int main() {
    // Voting eligibility
    int age;
    char str[] = "";
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your country name: ");
    scanf("%s",&str);
    
    if(age >= 18){
        printf(" You are elgible to vote in %s!",str);
    }else{
        printf(" You arenot eligible to vote in %s",str);
    }

    return 0;
}
