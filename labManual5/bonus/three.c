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

    switch (sem)
    {
    case 0:
        printf("\nInvalid Semester");
        break;
    case 1:
    case 2:
    case 3:
        printf("\nFreshman");
        break;
    case 4:
    case 5:
    case 6:
        printf("\nSophomore");
        break;
    case 7:
    case 8:
    case 9:
        printf("\nJunior");
        break;
    case 10:
    case 11:
    case 12:
        printf("\nSenior");
        break;
    default:
        switch (sem > 12)
        {
        case 1:
            printf("\nYou must graduate soon");
        }
    }
}
