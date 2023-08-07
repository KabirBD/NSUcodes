#include<stdio.h>
void main()
{
    float shortBase, longBase, height;
    printf("Enter the short base of trapezoid:\n");
    scanf("%f", &shortBase);
    printf("Enter the long base of trapezoid:\n");
    scanf("%f", &longBase);
    printf("Enter the height of trapezoid:\n");
    scanf("%f", &height);
    float areaOfTrapezoid = .5*(shortBase+longBase)*height;
    printf("The area of trapezoid is : %.2f",areaOfTrapezoid);
}
