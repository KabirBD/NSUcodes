#include <stdio.h>
void main()
{
    int bin, deci=0, m=1;
    printf("Enter binary number: ");
    scanf("%d", &bin);

    while (bin>0)
    {
        deci += (bin%10)*m;
        bin/=10;
        m*=2;
    }
    printf("in decimal = %d", deci);
}