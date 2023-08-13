/*
Find the volume and surface area of a (b) sphere.
Read necessary inputs from user e.g. radius of the sphere.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float sphereR;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &sphereR);

    float sphereV = (4/3.0)*PI*pow(sphereR,3);
    float sphereSA = 4*PI*pow(sphereR,2);
    printf("\nVolume of the sphere is: %.2f", sphereV);
    printf("\nSurface area of the sphere is: %.2f", sphereSA);
}
