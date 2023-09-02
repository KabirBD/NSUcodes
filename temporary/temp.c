#include <stdio.h>

void main()
{
    int a = 12;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
}