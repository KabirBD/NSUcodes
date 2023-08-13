/*
 Write a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...), only 11
(e.g. 11, 22, 33, ...), both 5 and 11 (e.g. 55, 110, ....), or neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).
*/

#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%5==0 && num%11==0)
    {
        printf("Multiple of both 5 and 11");
    }
    else if(num%5==0)
    {
        printf("Multiple of 5");
    }
    else if(num%11==0)
    {
        printf("Multiple of 11");
    }
    else
    {
        printf("Multiple of neither 5 nor 11");
    }
}
