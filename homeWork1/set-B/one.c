/*
Find the volume and surface area of a (a) cone and (b) sphere.
Read necessary inputs from user e.g. radius of the sphere
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float coneR, coneH;
    printf("Enter the radius of the cone: ");
    scanf("%f", &coneR);

    printf("Enter the height of the cone: ");
    scanf("%f", &coneH);

    float coneV = (1/3.0)*PI*coneR*coneR*coneH;
    float slant = sqrt(coneR*coneR+coneH*coneH);
    float coneSA = (PI*coneR*coneR) + (PI*coneR*slant);

    printf("\nVolume of the cone is: %.2f", coneV);
    printf("\nSurface area of the cone is: %.2f", coneSA);

    float sphereR;
    printf("\n\nEnter the radius of the sphere: ");
    scanf("%f", &sphereR);

    float sphereV = (4/3.0)*PI*pow(sphereR,3);
    float sphereSA = 4*PI*pow(sphereR,2);
    printf("\nVolume of the sphere is: %.2f", sphereV);
    printf("\nSurface area of the sphere is: %.2f", sphereSA);
}
