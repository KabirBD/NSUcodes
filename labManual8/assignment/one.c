#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter any number to print in words: ");
    scanf("%d", &num);

    int rem =num;
    int rev=0;
    while(rem>0){
        rev = rev*10 + rem%10;
        rem/=10;
    }

    // Finds last digit of the number and print it in words
    while (rev != 0)
    {
        switch (rev % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
        } // end of switch
        rev /= 10;
    } // end of while loop
}
