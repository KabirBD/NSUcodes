/*
Write a C program to input all angles of a triangle and check whether triangle is valid or not. (Hint: sum
of all angles of any triangle is 180 degrees)
*/

#include<stdio.h>

void main()
{
    int a1, a2, a3;
    printf("Enter the 3 angles of a triangle:\n");
    scanf("%d%d%d", &a1, &a2, &a3);

    if(a1+a2+a3 == 180)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid sides, can not be a triangle");
    }
}
