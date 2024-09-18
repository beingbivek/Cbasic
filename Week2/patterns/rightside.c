/*
    *
   **
  ***
 ****
*****
*/

#include<stdio.h>

int main(){
    // for(int i = 1;i<=5;i++){
    //     for(int j = 4; j>=i;j--){
    //         printf(" ");
    //     }
    //     for(int s = 1;s<=i;s++ ){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Best method
    for(int i = 1;i<=5;i++){
        for(int j = 1; j<=5;j++){
            if((i + j)<=5){
            printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}