#include<stdio.h>

void main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter value of (x1, y1):\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter value of (x2, y2):\n");
    scanf("%f %f", &x2, &y2);
    x3 = (x1+x2)/2;
    y3 = (y1+y2)/2;
    printf("Mid point is (%.2f, %.2f):\n", x3, y3);
}
