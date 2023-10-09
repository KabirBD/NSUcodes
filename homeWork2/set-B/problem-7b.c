/*#####################################################
Set-B
Solution of Problem-7 (part-2)

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int n, num;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int thisRow = 1; thisRow <= n; thisRow++)
    {
        for (int i = n - thisRow; i >= 0; i--)
            printf(" ");

        num = 0;
        for (int j = thisRow; j > 0; j--)
        {
            printf("%d", num);
            if (num == 0)
                num = 1;
            else
                num = 0;
        }
        printf("\n");
    }
}