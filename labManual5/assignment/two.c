/*
Farhan must pay a rem to a shopkeeper. The shopkeeper doesn�t have any change,
so Farhan must have all the notes required to pay the rem.
Write a C program that reads the rem and the number of each type of note
(500, 100, 50, 20, 10, 5, 2, 1) from user and then output whether it is possible
for Farhan to pay the rem or not. If it is possible, then also output the
number of each notes required to pay the rem.
*/


#include <stdio.h>

void main()
{
    int rem, n500, n100, n50, n20, n10, n5, n2, n1;

    printf("Enter amount: ");
    scanf("%d", &rem);

    printf("Enter number of notes:\n");
    printf("500: ");
    scanf("%d", &n500);
    printf("100: ");
    scanf("%d", &n100);
    printf("50: ");
    scanf("%d", &n50);
    printf("20: ");
    scanf("%d", &n20);
    printf("10: ");
    scanf("%d", &n10);
    printf("5: ");
    scanf("%d", &n5);
    printf("2: ");
    scanf("%d", &n2);
    printf("1: ");
    scanf("%d", &n1);

    if(rem <= n500*500+n100*100+n50*50+n20*20+n10*10+n5*5+n2*2+n1)
    {

        if(rem>=n500*500)
        {
            rem -= n500*500;
        }
        else if(rem>=500)
        {
            n500 = rem/500;
            rem %=500;
        }
        else n500=0;

        if(rem>=n100*100)
        {
            rem -= n100*100;
        }
        else if(rem>=100)
        {
            n100 = rem/100;
            rem %=100;
        }
        else n100=0;

        if(rem>=n50*50)
        {
            rem -= n50*50;
        }
        else if(rem>=50)
        {
            n50 = rem/50;
            rem %=50;
        }
        else n50=0;

        if(rem>=n20*20)
        {
            rem -= n20*20;
        }
        else if(rem>=20)
        {
            n20 = rem/20;
            rem %=20;
        }
        else n20=0;

        if(rem>=n10*10)
        {
            rem -= n10*10;
        }
        else if(rem>=10)
        {
            n10 = rem/10;
            rem %=10;
        }
        else n10=0;

        if(rem>=n5*5)
        {
            rem -= n5*5;
        }
        else if(rem>=5)
        {
            n5 = rem/5;
            rem %=5;
        }
        else n5=0;

        if(rem>=n2*2)
        {
            rem -= n2*2;
        }
        else if(rem>=2)
        {
            n2 = rem/2;
            rem %=2;
        }
        else n2=0;

        if(rem>n1)
        {
            printf("\nYou can not pay with this variants of notes.");
        }
        if(rem<n1)
        {
            n1=rem;
            rem=0;
        }
        if(rem==0)
        {
            printf("\nYou can pay the bill by using the following counts of different notes:");
            printf("\n500: %d", n500);
            printf("\n100: %d", n100);
            printf("\n50: %d", n50);
            printf("\n20: %d", n20);
            printf("\n10: %d", n10);
            printf("\n5: %d", n5);
            printf("\n2: %d", n2);
            printf("\n1: %d", n1);
        }
    }
    else printf("You have less money than your bill.");
}
