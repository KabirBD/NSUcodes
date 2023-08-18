/*
4.	Write a C program that reads the radius r of a circle and the side a of an equilateral triangle from
user and then checks if that triangle can be placed inside that circle or not. Hint: Use Pythagorean theorem.
*/

#include<stdio.h>
#include<math.h>
void main()
{
    int r, a;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("\nEnter the side of the equilateral triangle: ");
    scanf("%d", &a);

    if(a <= sqrt(3)*r){
        printf("\nThe equilateral triangle can be placed inside that circle");
    }
    else {
        printf("\nThe equilateral triangle can not be placed inside that circle");
    }
}
