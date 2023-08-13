/*
Write a C program that reads two complex numbers from user.
Then compute and print the sum, difference, and product of these numbers.
*/

#include<stdio.h>

void main()
{
    int r1, r2, i1, i2;
    printf("Enter Real part of 1st complex number: ");
    scanf("%d", &r1);

    printf("Enter Imaginary part of 1st complex number: ");
    scanf("%d", &i1);

    printf("Enter Real part of 2nd complex number: ");
    scanf("%d", &r2);

    printf("Enter Imaginary part of 2nd complex number: ");
    scanf("%d", &i2);

    int sumR = r1+r2;
    int sumI = i1+i2;
    if(sumI<0) printf("\nSum= %d%di", sumR, sumI);
    else printf("\nSum= %d+%di", sumR, sumI);

    int difR = r1-r2;
    int difI = i1-i2;
    if(difI<0)printf("\nDifference= %d%di", difR, difI);
    else printf("\nDifference= %d+%di", difR, difI);

    int prdR = r1*r2 - i1*i2;
    int prdI = r1*i2 + r2*i1;
    if(prdI<0) printf("\nProduct= %d%di",prdR, prdI);
    else printf("\nProduct= %d+%di",prdR, prdI);
}
