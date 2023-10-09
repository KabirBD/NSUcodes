#include <stdio.h>
void main()
{
    int bin = 0, deci, rem, m = 1;
    printf("Enter decimal number: ");
    scanf("%d", &deci);

    rem = deci;
    while (rem)
    {
        bin = (rem % 2) * m + bin;
        rem /= 2;
        m *= 10;
    }
    
    printf("%d in binary = %d", deci, bin);
}