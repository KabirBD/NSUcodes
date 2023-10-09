#include <stdio.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int sp = n - row; sp >= 1; sp--)
        {
            printf(" ");
        }
        for (int chr = 1; chr <= n; chr++)
        {
            if (chr == 1 || chr == row || row == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}