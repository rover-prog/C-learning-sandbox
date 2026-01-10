#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ComputerTurn(int a); // This function decides the computer's turn.
int WinnerPick(int a, int b); // Picks the winner in each round and tells the result.
void ScoreDisplay(int a); // This one tells the score after each round ends also terminates and decides the final winner of the match.
int PlayerTurn(); // This function takes the player moves and displays it.
int main()
{
    srand(time(NULL));
    do
    {
        int PT, CT, win;
        PT = PlayerTurn();
        CT = ComputerTurn(rand() % 3);
        win = WinnerPick(CT, PT);
        ScoreDisplay(win);
        // rock = 1; paper = -1; scissors  = 0;
    } while (1);
    return 0;
}
int PlayerTurn()
{
    int pick;
    do
    {
        printf("\n\t--- Pick ---\n");
        printf("1.Rock\n");
        printf("2.Paper\n");
        printf("3.Scissor\n");
        printf("Enter: ");
        scanf("%d", &pick);
        switch (pick)
        {
        case 1:
            printf("Rock vs ");
            return 1;
            break;
        case 2:
            printf("Paper vs ");
            return -1;
            break;
        case 3:
            printf("Scissor vs ");
            return 0;
            break;
        default:
            printf("Try with valid pick..\n");
            break;
        }
    } while (pick < 1 || pick > 3);
}
void ScoreDisplay(int a)
{
    static int player = 0, computer = 0, draw = 0;
    switch (a)
    {
    case 0:
        player++;
        break;
    case 1:
        computer++;
        break;
    default:
        draw++;
        break;
    }
    printf("Player: %d, Computer: %d, Draws: %d", player,computer,draw);
    if (player == 3)
    {
        printf("\nPlayer Wins...\n");
        exit(EXIT_SUCCESS);
    }
    else if (computer == 3)
    {
        printf("\nComputer Wins...\n");
        exit(EXIT_SUCCESS);
    }
}
int WinnerPick(int a, int b)
{
    if (a == 1 && b == 0)
    {
        printf("\nWinner: Computer\n");
        return 1;
    }
    else if (a == 1 && b == -1)
    {
        printf("\nWinner: Player\n");
        return 0;
    }
    else if (a == 1 && b == 1)
    {
        printf("\nDraw\n");
        return -1;
    }
    else if (a == 0 && b == 0)
    {
        printf("\nDraw\n");
        return -1;
    }
    else if (a == 0 && b == -1)
    {
        printf("\nWinner: Computer\n");
        return 1;
    }
    else if (a == 0 && b == 1)
    {
        printf("\nWinner: Player\n");
        return 0;
    }
    else if (a == -1 && b == 0)
    {
        printf("\nWinner: Player\n");
        return 0;
    }
    else if (a == -1 && b == -1)
    {
        printf("\nDraw\n");
        return -1;
    }
    else if (a == -1 && b == 1)
    {
        printf("\nWinner: Computer\n");
        return 1;
    }
}
int ComputerTurn(int a)
{
    switch (a)
    {
    case 0:
        printf("Rock\n");
        return 1;
        break;
    case 1:
        printf("Scissor\n");
        return 0;
        break;
    case 2:
        printf("Paper\n");
        return -1;
        break;
    }
}