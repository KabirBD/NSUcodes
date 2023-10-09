/*#####################################################
Set-B
Solution of Problem-7 (part-1)

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int n;
    char ch = 'A';
    printf("Enter n: ");
    scanf("%d", &n);

    for (int thisRow = 1; thisRow <= n; thisRow++)
    {
        for (int i = n - thisRow; i >= 0; i--)
            printf(" ");
        for (int j = thisRow; j > 0; j--)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}