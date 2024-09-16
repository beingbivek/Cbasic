#include<stdio.h>  
void main(){
    char alphabet;
    printf("Enter a character to check vowel or not: ");
    scanf("%c",&alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("a is vowel");
        break;
    case 'e':
        printf("e is vowel");
        break;
    case 'i':
        printf("i is vowel");
        break;
    case 'o':
        printf("o is vowel");
        break;
    case 'u':
        printf("u is vowel");
        break;
    default:
        printf("Not a vowel");
        break;
    }
}