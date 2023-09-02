/*
 Write a program to compute the following series using while loop: 4+11+18++….+n
*/

#include <stdio.h>

void main()
{
    int n, sum=0,  i=4;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i<=n){
        sum += i;
        i +=7;
    }
    printf("Sum = %d", sum);
}