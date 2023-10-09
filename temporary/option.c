#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char opt[3] = {'*', ' ', ' '};
void down()
{
    int indx;
    for (int i = 0; i < 3; i++)
    {
        if (opt[i] == '*')
            indx = i;
    }
    if (indx = 2)
    {
        opt[indx] = ' ';
        opt[0] = '*';
    }
    else
    {
        opt[indx] = ' ';
        opt[indx + 1] = '*';
    }
}
void main()
{
    do
    {

        printf("( %c )Hi, what you want?\n", opt[0]);
        printf("( %c )Hi, what you want?\n", opt[1]);
        printf("( %c )Hi, what you want?\n", opt[2]);

        switch (getch())
        {
        case 72:
            printf("\nUp Arrow");
            break;
        case 80:
            down()
            break;
        case 77:
            printf("\nRight Arrow");
            break;
        case 75:
            printf("\nLeft Arrow");
            break;
        }
    } while (1);
}