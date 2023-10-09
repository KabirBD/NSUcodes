/*#####################################################
Set-B
Solution of Problem-1

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>
#include <math.h>

void main()
{
    int n, revN = 0, sqrtOfN, isPerfSqr = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int rem = n;
    while (rem > 0)
    {
        revN = revN * 10 + rem % 10;
        rem /= 10;
    }

    sqrtOfN = sqrt(n);
    if (sqrtOfN * sqrtOfN == n)
        isPerfSqr = 1;

    if (n == revN && isPerfSqr)
        printf("%d is a square palindrome", n);
    else
        printf("%d is not a square palindrome", n);
}