/*#####################################################
Set-B
Solution of Problem-6

Name: Md. Kabir Hosen
ID: 2323696042
Section: 04
#######################################################*/

#include <stdio.h>

void main()
{
    int n, termX = 0, termY = 1, termZ;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("First %d Fibonacci numbers: ", n);
        printf("%d, ", termX);
        for (int i = 2; i <= n; i++)
        {
            termZ = termX + termY;
            printf("%d, ", termZ);
            termX = termY;
            termY = termZ;
        }
    }
    else printf("Enter valid n");
}
