#include<stdio.h>
void main()
{
    float base, height;
    printf("Enter the base of parallelogram:\n");
    scanf("%f", &base);
    printf("Enter the height of parallelogram:\n");
    scanf("%f", &height);
    float areaOfParallelogram = base*height;
    printf("The area of areaOfParallelogram is : %.2f",areaOfParallelogram);
}
