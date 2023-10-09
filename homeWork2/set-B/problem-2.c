/*#####################################################
Set-B
Solution of Problem-2

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int m, n, thisNum, remDigit, thisDigit, thisSum, thisDigitFact;

    printf("Enter starting and ending range: ");
    scanf("%d %d", &m, &n);

    printf("Strong numbers between %d and %d are: ", m, n);
    for (thisNum = m; thisNum <= n; thisNum++)
    {
        thisSum = 0;
        remDigit = thisNum;
        while (remDigit > 0)
        {
            thisDigit = remDigit % 10;
            remDigit /= 10;
            thisDigitFact = 1;
            for (int multiply = 1; multiply <= thisDigit; multiply++)
            {
                thisDigitFact *= multiply;
            }
            thisSum += thisDigitFact;
        }
        if (thisNum == thisSum)
            printf("%d  ", thisNum);
    }
}
