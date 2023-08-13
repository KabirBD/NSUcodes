/*
Farhan must pay a bill to a shopkeeper. The shopkeeper doesn’t have any change,
so Farhan must have all the notes required to pay the bill.
Write a C program that reads the bill and the number of each type of note
(500, 100, 50, 20, 10, 5, 2, 1) from user and then output whether it is possible
for Farhan to pay the bill or not. If it is possible, then also output the
number of each notes required to pay the bill.
*/


#include<stdio.h>
void main()
{
    int bill, noteType[8]= {500, 100, 50, 20, 10, 5, 2, 1}, numOfNotes[8];
    printf("Enter amount: ");
    scanf("%d", &bill);

    for(int i=0; i<=7; i++) //Takes inputs for number of notes have
    {
        printf("%d: ", noteType[i]);
        scanf("%d", &numOfNotes[i]);
    }

    int totalHave=0;
    for(int i=0; i<=7; i++) //Calculate total money user has
    {
        totalHave += noteType[i]*numOfNotes[i];
    }

    if(bill<=totalHave) //Check bill is less than total money user has
    {
        int rem = bill;
        int i=0;
        while(i<8) //Go inside for each types of notes
        {
            if( numOfNotes[i]>0 && rem >= noteType[i]*numOfNotes[i]) // check how many notes can be given of this type of notes
            {
                rem -= (noteType[i]*numOfNotes[i]);
                i++;
            }
            else if(numOfNotes[i]==0) //if num of this type of note is 0, go to next type of note
            {
                i++;
            }
            else //if total value of this type of notes is more than remaining bill, decrease a note of this type
            {
                numOfNotes[i]--;
            }
        }
        int totalPay=0;
        for(int i=0; i<=7; i++) //check the total value of listed notes to pay
        {
            totalPay += noteType[i]*numOfNotes[i];
        }
        if (totalPay==bill) //if total value of listed notes == bill
        {
            printf("\nYou can pay the bill by using the following counts of different notes:");
            for(int i=0; i<=7; i++)
            {
                printf("\n%d: %d", noteType[i], numOfNotes[i]);
            }
        }
        else //if total value of listed notes != bill
        {
            printf("\nYou can not pay with this variants of notes.");
        }
    }
    else //if bill is more than total money user has
    {
        printf("\nYou have less money than your bill.");
    }
}
