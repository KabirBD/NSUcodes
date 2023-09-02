#include <stdio.h>
void main()
{
    int i, n1, n2, min, gcd = 1;
    printf("Enter any two numbers to find GCD: ");
    scanf("%d %d", &n1, &n2);
    min = (n1 < n2) ? n1 : n2;
    
    for (i = min; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("\nGCD of %d and %d = %d\n", n1, n2, gcd);
}