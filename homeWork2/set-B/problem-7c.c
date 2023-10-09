/*#####################################################
Set-B
Solution of Problem-7 (part-3)

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int thisRow = 1; thisRow <= n; thisRow++)
    {
        for (int i = n - thisRow; i > 0; i--)
            printf(" ");
        printf("*");
        for (int j = 1; j <= thisRow * 2 - 3; j++)
            printf(" ");
        if (thisRow != 1)
            printf("*");
        printf("\n");
    }

    for (int thisRow = n - 1; thisRow > 0; thisRow--)
    {
        for (int i = n - thisRow; i > 0; i--)
            printf(" ");
        printf("*");
        for (int j = 1; j <= thisRow * 2 - 3; j++)
            printf(" ");
        if (thisRow != 1)
            printf("*");
        printf("\n");
    }
}