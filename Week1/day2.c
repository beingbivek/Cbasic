#include<stdio.h>

int main(){
    int p; //variable declaration
    p = 50; //variable initilization

    int q = 70; // variable declaration and initilization

    /*
    Certain rules
    1. variable name do not start with number
    2. variable name should not contain blank space and comma
    3. variable name should not contain special characters(!@#$%^&*) except underscore(_)
    4. variables are case sensitive
    5. variable name should be unique
    6. variable name must not contain any keyword
    */

   /*
   Datatypes
   1. int - 50,13,324
   2. float - 234.234,234.00 - can handle 6 decimals
   3. double - 12.1212,1212.232323223 - can handle 15 decimals
   4. char - 'g',"h"
   5. void
   6. const
   */

  int a = 9;
  int x = 1, y = 2;
  float b = 9.9;
  char c = 'B';
  double d = 12.1212122;
//   char str[] = "Hello world";

  /*
  format specifier
  %d - integer
  %f - float
  %c - character
  */

 printf("%d,%d,%d,Hello\n",a,x,y);
 printf("%1.2f,\n",b);
 printf("%c\n",c);

 //operators
 
 /*
 Arthemetic Operators
 + - / * %

 Type casting - changing datatype
 float a = 9.2;
 int b=2;
 float c = int(a)/b;
 printf("%1.2f",c);
 */

int first,second;

printf("Enter first number: ");
scanf("%d",&first);
printf("Enter second number: ");
scanf("%d",&second);
int sum = first + second;
printf("The sum is %d\n",sum);
int diff = first - second;
printf("The difference is %d",diff);

/*
to run code
- gcc [filename].c -o [executable file name]
- excutable file name.exe
*/
}