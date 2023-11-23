#include "main.h"

int main()
{
    char block[9] =  {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char used[9];
    char player1 = 'X';
    char player2 = 'O';
    char turn[2] = {player1, player2};
    char choose;
    int i = 0, j, u = 0, toggle = 1;
    int input = 0;

    while (1)
    {
        printf("Enter (1) for 1 player and (2) for tow player: ");
            choose = getchar();
                if (choose != '1' && choose != '2')
                printf("ERROR : pleas enter 1 or 2\n");
                else
                    break;
            
    }
    if (choose == '2')
    {
        printf("the game is started choose number to put your sighn\n");
        while (i < 9)
        {
            scanf("%d", &input);
            for (j = 0; j < 9; j++)
            {
                if (input == used[j])
                {
                printf("the %d is used\n", input);
                input = 0;
                break;
                }
            }
            if(input != 0)
            {
                used[u] = input;
                draw(block, input, toggle);
                test(block);
                toggle = ~toggle;
                i++;
                u++;
            }
        }

    }
    
}

