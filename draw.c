#include "main.h"
/**
 * draw - draw the xo game shape
 * 
 * Return: always 0
*/

int draw(char *block, int input, int player)
{
    if (player != 0 && input <= 9 && input > 0)
    {
        if (player == 1)
             block[input - 1] = 'X';
        if (player == -2) 
           block[input - 1] = 'O';
    }
    printf("          %c | %c | %c \n",block[0], block[1], block[2]);
    printf("         -----------\n");
    printf("          %c | %c | %c \n",block[3], block[4], block[5]);
    printf("         -----------\n");
    printf("          %c | %c | %c \n", block[6], block[7], block[8]);
return (0);
}
