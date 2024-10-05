// create a game 3*3 TicTacToe

#include<stdio.h>

int main(){
    int row=3,col=3,mainchoice,num,gameover = 0;
    char playerchoice,player2choice;
    char ttt[row][col];
    printf("Welcome to 3 * 3 TicTacToe Game - developed by Bivek\n");
    printf("Main Menu\n1. with PC\n2. with Human\n3. Exit\n: ");
    scanf("%d",&mainchoice);
    switch (mainchoice)
    {
    case 1:
        printf("Currently this mode is not available\n");
        break;
    case 2:
        printf("You are Player 1\nYour friend is Player 2\n");
        printf("1|2|3\n------\n4|5|6\n------\n7|8|9\n");
        printf("Player 1 choose x or o (only small letters): ");
        scanf("%c",&playerchoice);
        printf("Where do you want to start?\n");
        while (gameover == 1)
        {
        printf("Enter number: ");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            ttt[0][0] = playerchoice;
            break;
        
        default:
            break;
        }
        }


        break;
    case 3:
        /* code */
        break;
    
    default:
        break;
    }
    printf("1|2|3\n------\n4|5|6\n------\n7|8|9\n");
    
    
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
        printf("Enter number for %d column and %d row: ",j+1,i+1);
        scanf("%d",&num[row][col]);
        sum += num[row][col];
        printf("\n");
        }
        printf("The sum of %d row is %d\n",i+1,sum);
    }
}