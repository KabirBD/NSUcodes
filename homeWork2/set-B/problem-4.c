/*#####################################################
Set-B
Solution of Problem-4

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int n, sum, count = 0, num = 6;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (1)
    {
        sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
                sum += i;
        }

        if (num == sum)
            count++;

        if (count == n)
        {
            printf("N-th perfect number is %d", num);
            break;
        }
        num++;
    }
}