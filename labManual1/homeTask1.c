/*
Ask user for two integers a and b. Then swap (interchange) the values of a and
b. That means, a should get the value of b and b should get the value of a.
*/

#include<stdio.h>

void main()
{
    int a, b, tmp;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    tmp =a;
    a=b;
    b=tmp;

    printf("After swapping, a:%d and b:%d", a, b);
}
