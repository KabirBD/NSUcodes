/*#####################################################
Set-B
Solution of Problem-3

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>
#include <math.h>

void main()
{
    int x, n, termT=1, termB, termPow = 0;
    float thisTerm, sum = 0;
    printf("Enter the value of x & n: ");
    scanf("%d %d", &x, &n);

    for (int termN = 1; termN <= n; termN++)
    {
        termT = pow(x, termPow);
        termPow += 2;

        termB = 1;
        for (int i = 1; i < termN; i++)
        {
            termB *= i;
        }
        thisTerm = (float)termT / termB;

        if (termN % 2 == 0)
            sum -= thisTerm;
        else
            sum += thisTerm;
    }
    printf("Sum = %.3f", sum);
}
