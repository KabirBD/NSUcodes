#include<stdio.h>
#define PI 3.14\

void main(){
float radius, sa;
printf("Enter the radius of a sphare: ");
scanf("%f", &radius);
sa = 4*PI*radius*radius;
printf("\nThe surface area of the sphare is = %.2f", sa);
}
