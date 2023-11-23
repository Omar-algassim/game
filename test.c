#include "main.h"

char test(char *block)
{
    if(block != NULL)
    {
        if (block[0] == block[1] && block[1] == block[2])
        {
            if (block[1] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[1] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[3] == block[4] && block[4] == block[5])
        {
            if (block[4] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[4] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[6] == block[7] && block[7] == block[8])
        {
            if (block[7] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[7] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[0] == block[3] && block[3] == block[6])
        {
            if (block[3] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[3] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[1] == block[4] && block[4] == block[7])
        {
            if (block[4] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[4] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[2] == block[5] && block[5] == block[8])
        {
            if (block[5] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[5] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[2] == block[4] && block[4] == block[8])
        {
            if (block[4] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[4] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
        if (block[8] == block[4] && block[4] == block[0])
        {
            if (block[4] == 'X')
            {
                printf("player 1 win\n");
                return (0);
            }
            else if (block[4] == 'O')
            {
                printf("player 2 win\n");
                return (0);   
            }
            
        }
    }
}