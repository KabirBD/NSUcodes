/*
Write a program that takes a minimum number, a maximum number, and common difference and prints
the sum of the arithmetic series between them.
Sample input/output (bold ones are inputs):
Enter minimum: 11
Enter maximum: 19
Enter Common difference: 2
The Sum is: 11 + 13 + 15 +17 +19 = 75
*/

#include <stdio.h>

void main()
{
    int min, max, dif, sum=0;
    printf("Enter minimum: ");
    scanf("%d", &min);
    printf("Enter maximum: ");
    scanf("%d", &max);
    printf("Enter commmon difference: ");
    scanf("%d", &dif);

    printf("The sum is: ");
    for (int i = min; i <= max; i += dif)
    {
        (i==min)? printf("%d ", i):printf("+ %d ", i);
        sum +=i;
    }
    printf(" = %d", sum);


}