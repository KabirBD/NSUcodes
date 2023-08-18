/*
Write a C program that reads the semester no. of a student and print a
comment about student based on the table below. Use if - else if - else.
*/

#include <stdio.h>
void main()
{
    int sem;
    printf("Enter your Semester No.: ");
    scanf("%d", &sem);

    if (sem == 0)
    {
        printf("\nInvalid Semester");
    }
    else if (sem >= 1 && sem <= 3)
    {
        printf("\nFreshman");
    }
    else if (sem >= 4 && sem <= 6)
    {
        printf("\nSophomore");
    }
    else if (sem >= 7 && sem <= 9)
    {
        printf("\nJunior");
    }
    else if (sem >= 10   && sem <= 12)
    {
        printf("\nSenior");
    }
    else if (sem >12)
    {
        printf("\nYou must graduate soon");
    }
}