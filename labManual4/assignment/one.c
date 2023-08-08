/*Write a C program to input sides of a triangle and check whether triangle is valid or not (Hint: if sum of
any two sides of a triangle is greater than the third side then the triangle is valid)
*/

#include<stdio.h>

void main()
{
    int s1, s2, s3;
    printf("Enter the values of 3 sides of a triangle:\n");
    scanf("%d%d%d", &s1, &s2, &s3);

    if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid sides, can not be a triangle");
    }
}
