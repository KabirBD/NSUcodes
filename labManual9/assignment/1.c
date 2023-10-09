#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter m & n: ");
    scanf("%d%d", &m, &n);

    for (int row = 1; row <= n; row++)
    {
        for (int sp = n - row; sp >= 1; sp--)
        {
            printf(" ");
        }
        for (int i = 1; i <= m; i++)
        {
            if (i == 1 || i == m || row == 1 || row == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}