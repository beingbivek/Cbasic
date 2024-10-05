// create a game 3*3 TicTacToe

#include<stdio.h>

int main(){
    int row,col,mainchoice,num,gameover = 0;
    char playerchoice,player2choice;
    char ttt[3][3]={{"1","2","3"},{"4","5","6"},{"7","8","9"}},usedchar[3][3]={{"a","a","a"},{"a","a","a"},{"a","a","a"}};
    printf("Welcome to 3 * 3 TicTacToe Game - developed by Bivek\n");
    printf("Main Menu\n1. with PC (Not available)\n2. with Player 2\n3. Exit\n: ");
    scanf("%d",&mainchoice);
    switch (mainchoice)
    {
    case 1:
        printf("Currently this mode is not available\n");
        break;
    case 2:
        printf("You are Player 1\nYour friend is Player 2\n");
        while(playerchoice == "x" || playerchoice == "o")
        {
            printf("\nPlayer 1 choose x or o (only small letters): ");
            scanf("%c",&playerchoice);
        }
        if(playerchoice == "x"){
            player2choice = "o";
        }else{
            player2choice = "x";
        }
        printf("1|2|3\n------\n4|5|6\n------\n7|8|9\n");
        printf("\nWhere do you want to start?\n");
        while (gameover == 1)
        {
            printf("Enter number: ");
            scanf("%d",&num);
            for(int i = 0; i < 3; i++){
                for(int j = 0; j <3; j++){
                    if(ttt[i][j] != num + '0'){
                        usedchar[i][j] = 
                    }
                }
            }
            switch (num)
            {
            case 1:
                ttt[0][0] = playerchoice;
                break;
            case 2:
                ttt[0][1] = playerchoice;
                break;
            case 3:
                ttt[0][2] = playerchoice;
                break;
            case 4:
                ttt[1][0] = playerchoice;
                break;
            case 5:
                ttt[1][1] = playerchoice;
                break;
            case 6:
                ttt[1][2] = playerchoice;
                break;
            case 7:
                ttt[2][0] = playerchoice;
                break;
            case 8:
                ttt[2][1] = playerchoice;
                break;
            case 9:
                ttt[2][2] = playerchoice;
                break;
            
            default:
                printf("Invalid number, Try again (1-9)!\n");
                break;
            }
        }


        break;
    case 3:
        /* code */
        break;
    
    default:
        printf("Invalid Selection, Try again!\n");
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