/*
Write a program that takes a minimum number, a maximum number, and common ratio and prints the 
sum of the geometric series between them. 
Sample input/output (bold ones are inputs): 
Enter minimum: 5
Enter maximum: 150
Enter Common ratio: 3
The Sum is: 5 + 15 + 45 + 135 = 200

*/

#include <stdio.h>

void main()
{
    int min, max, ratio, sum=0;
    printf("Enter minimum: ");
    scanf("%d", &min);
    printf("Enter maximum: ");
    scanf("%d", &max);
    printf("Enter commmon ratio: ");
    scanf("%d", &ratio);

    printf("The sum is: ");
    for (int i = min; i <= max; i *= ratio)
    {
        (i==min)? printf("%d ", i):printf("+ %d ", i);
        sum +=i;
    }
    printf(" = %d", sum);


}