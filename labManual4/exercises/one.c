/*
 Write a C program to enter month number and print number of days in month
 */

#include<stdio.h>

void main()
{
    int mnth;
    printf("Enter month number: ");
    scanf("%d", &mnth);

    if ( mnth==4 || mnth==6 || mnth==9 || mnth==11)
    {
        printf("\nThis month has 30 days");
    }
    else if(mnth==2)
    {
        printf("\nThis month has 28 days");
    }
    else
    {
        printf("\nThis month has 31 days");
    }
}
