#include <stdio.h>
void main()
{
    int n, f;
    printf("Enter n: ");
    scanf("%d", &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        f = 1;
        for (int j = 1; j <= i; j++)
            f *= j;
        sum += 1.0 / f;
    }
    printf("sum = %f",sum);
}