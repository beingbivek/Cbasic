// create a game 3*3 TicTacToe

#include <stdio.h>

char setvalue(char t[3][3], char pchoice, int num);

void displayttt(char t[3][3]);

int win(char t[3][3]);

int main()
{
    int exit = 0, winner, mainchoice, num, exchangeplayer = 1, gameover = 0, usednum[9] = {11, 11, 11, 11, 11, 11, 11, 11, 11};
    char playerchoice, player2choice;
    char ttt[3][3] = {"123", "456", "789"};

    while (exit != 1)
    {
        printf("Welcome to 3 * 3 TicTacToe Game - Developed by Bivek\n");
        printf("Main Menu\n1. with PC (Not available)\n2. with Player 2\n3. Exit\n: ");
        scanf("%d", &mainchoice);
        switch (mainchoice)
        {
        case 1:
            printf("Currently this mode is not available\n");
            break;
        case 2:
            printf("You are Player 1\nYour friend is Player 2\n");
            // while(playerchoice == "x" || playerchoice == "o")
            // {
            printf("\nPlayer 1 choose x or o (only small letters): ");
            scanf(" %c", &playerchoice);
            // }
            if (playerchoice == 'x')
            {
                player2choice = 'o';
            }
            else
            {
                player2choice = 'x';
            }
            printf("Player 1 choose %c so, Player 2 uses %c", playerchoice, player2choice);
            printf("\nWhere do you want to start?\n");
            while (gameover != 1)
            {

                // display ttt
                displayttt(ttt);

                printf("Player %d\n", exchangeplayer);
                printf("Enter number: ");
                scanf("%d", &num);

                // To check the number is used again or not.
                for (int i = 0; i < 9; i++)
                {
                    if (usednum[i] == num)
                    {

                        printf("Can't enter same number again!\n");

                        break;
                    }
                    if (usednum[i] == 11)
                    {
                        printf("\n%d,%d,%d\n", i, usednum[i], num);
                        usednum[i] = num;
                        printf("\n%d,%d,%d\n", i, usednum[i], num);
                        break;
                    }
                }

                // player exchange
                if (exchangeplayer == 1)
                {
                    ttt[3][3] = setvalue(ttt, playerchoice, num);
                    exchangeplayer = 2;
                }
                else if (exchangeplayer == 2)
                {
                    ttt[3][3] = setvalue(ttt, player2choice, num);
                    exchangeplayer = 1;
                }
                else
                {
                    printf("error in player exchange");
                }

                // draw game logic
                int count = 0;
                for (int i = 0; i < 9; i++)
                {
                    if (usednum[i] == 11)
                    {
                        count++;
                    }
                }
                printf("%d", count);
                if (count == 0)
                {
                    printf("Game is draw! Try again!");
                    gameover = 1;
                    continue;
                }

                // win function
                int wintest = win(ttt);
                if (wintest == 1)
                {
                    displayttt(ttt);
                    winner = exchangeplayer == 1 ? 2 : 1;
                    printf("Game over, player %d won!", winner);
                    gameover = win(ttt);
                }
                printf("%d \n", wintest);
            }
            break;
        case 3:
            printf("Exit");
            exit = 1;
            break;

        default:
            printf("Invalid Selection, Try again!\n");
            break;
        }
    }
    // printf("1|2|3\n------\n4|5|6\n------\n7|8|9\n");
}

char setvalue(char t[3][3], char pchoice, int num)
{
    switch (num)
    {
    case 1:
        t[0][0] = pchoice;
        break;
    case 2:
        t[0][1] = pchoice;
        break;
    case 3:
        t[0][2] = pchoice;
        break;
    case 4:
        t[1][0] = pchoice;
        break;
    case 5:
        t[1][1] = pchoice;
        break;
    case 6:
        t[1][2] = pchoice;
        break;
    case 7:
        t[2][0] = pchoice;
        break;
    case 8:
        t[2][1] = pchoice;
        break;
    case 9:
        t[2][2] = pchoice;
        break;

    default:
        printf("Invalid number, Try again (1-9)!\n");
        break;
    }
    return t[3][3];
}

void displayttt(char t[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c | ", t[i][j]);
        }
        printf("\n--------------\n");
    }
}

int win(char t[3][3])
{
    // win strategies;
    char row[3], col[3], dia[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            col[j] = t[i][j];
            // printf(" %c | ",t[i][j]);
            row[j] = t[j][i];
        }
        if (col[0] == col[1] && col[0] == col[2])
        {
            return 1;
            break;
        }
        else if (row[0] == row[1] && col[0] == row[2])
        {
            return 1;
            break;
        }
        else if (t[1][1] == t[0][1] && t[1][1] == t[2][2])
        {
            return 1;
            break;
        }
        else if (t[1][1] == t[0][2] && t[1][1] == t[2][0])
        {
            return 1;
            break;
        }
        else
        {
            return 0;
            break;
        }
    }
    return 0;
}