/*
Farhan must pay a bill to a shopkeeper. The shopkeeper doesn�t have any change,
so Farhan must have all the notes required to pay the bill.
Write a C program that reads the bill and the number of each type of note
(500, 100, 50, 20, 10, 5, 2, 1) from user and then output whether it is possible
for Farhan to pay the bill or not. If it is possible, then also output the
number of each notes required to pay the bill.
*/

#include <stdio.h>
void main()
{
    int rem, note[8] = {500, 100, 50, 20, 10, 5, 2, 1}, nts[8], total=0;

    printf("Enter amount: ");
    scanf("%d", &rem);

    printf("Enter number of notes:\n");
    for (int i = 0; i <= 7; i++)
    {
        printf("%d: ", note[i]);
        scanf("%d", &nts[i]);
        total += note[i]*nts[i];
    }

    if(rem<=total)
    {

        for (int i = 0; i <= 7; i++)
        {
            if(rem>=nts[i]*note[i])
            {
                rem -= nts[i]*note[i];
            }
            else if(rem>=note[i])
            {
                nts[i] = rem/note[i];
                rem %= note[i];
            }
            else nts[i]=0;
        }
        if (!rem)
        {
            printf("\nYou can pay the bill by using the following counts of different notes:");
            for(int i=0; i<=7; i++)
            {
                printf("\n%d: %d", note[i], nts[i]);
            }
        }
        else
        {
            printf("\nYou can not pay with this variants of notes.");
        }
    }
    else printf("You have less money than your bill.");
}
