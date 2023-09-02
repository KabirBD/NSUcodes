#include <stdio.h>
void main()
{
    int bin = 0, deci, m = 1;
    printf("Enter decimal number: ");
    scanf("%d", &deci);

    while (m <= deci)
        m *= 2;
    m /= 2;
    while (m > 0)
    {
        bin *= 10;
        bin += deci / m;
        deci %= m;
        m /= 2;
    }
    printf("in binary = %d", bin);
}