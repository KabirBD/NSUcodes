/*#####################################################
Set-B
Solution of Problem-5

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int bin, deci = 0, m = 1, thisDigit, isValid = 1;
    printf("Enter binary number: ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        thisDigit = bin % 10;
        if (thisDigit == 0 || thisDigit == 1)
        {
            deci += thisDigit * m;
            bin /= 10;
            m *= 2;
        }
        else
        {
            isValid = 0;
            break;
        }
    }
    if (isValid)
        printf("In decimal = %d", deci);
    else
        printf("Input is not a binary number");
}