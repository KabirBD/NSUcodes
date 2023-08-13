/*
Find the volume and surface area of a (a) cone.
Read necessary inputs from user e.g. radius of the sphee.
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
}
