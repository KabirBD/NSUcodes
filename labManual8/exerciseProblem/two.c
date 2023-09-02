#include <stdio.h>
void main()
{
    int n, m = 1, d = 1, i;
    printf("Enter n: ");
    scanf("%d", &n);
    // compute 2n!
    for (i = 1; i <= 2 * n; i++)
        m *= i;
    // compute n!
    for (i = 1; i <= n; i++)
        d *= i;
    printf("q(%d) = %d", n, m / d);
}