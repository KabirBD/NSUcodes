#include <stdio.h>

int power(int x, int a)
{
    int p = 1;
    for (int i = 1; i <= a; i++)
    {
        p *= x;
    }
    return p;
}
void rnd(double n, int p)
{
    int num = n;
    int points = (n - num) * power(10, p);
    int nextPoint = (n - num) * power(10, p + 1) - points * 10;
    printf("%d", num);
    if (nextPoint >= 5)
        points++;
    if (points)
        printf(".%d", points);
}
void main()
{
    rnd(5.673, 2);
}