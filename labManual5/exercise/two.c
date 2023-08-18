/*
Find the maximum between two numbers using switch case.
*/

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    switch(a>b){
        case 1: printf("%d is maximum", a); break;
        case 0: printf("%d is maximum", b); break;
    }
}