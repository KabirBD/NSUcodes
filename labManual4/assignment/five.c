/*
Write a C program that reads the radius r of a circle and the side a of a square from user and then
checks if that square can be placed inside that circle or not. Hint: Use Pythagorean theorem.
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int r, a;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("\nEnter the side of the square: ");
    scanf("%d", &a);
    float hypotenuse = sqrt(2)*a;
    if(hypotenuse <= 2*r){
        printf("\nThe square can be placed inside that circle");
    }
    else {
        printf("\nThe square can not be placed inside that circle");
    }
}
