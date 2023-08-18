/*
Find the volume and surface area of a (a) cuboid and (b) cylinder.
Read necessary inputs from user e.g. height and radius of the cylinder.
*/


#include<stdio.h>
#define PI 3.14

void main()
{
    float cbL, cbH, cbW;
    printf("\n\nEnter cuboid length:");
    scanf("%f", &cbL);
    printf("Enter cuboid height:");
    scanf("%f", &cbH);
    printf("Enter cuboid width:");
    scanf("%f", &cbW);

    float cbV = cbL*cbH*cbW;
    printf("\nCuboid Volume: %.2f", cbV);

    float cbA = cbL*cbH + cbH*cbW + cbW*cbL;
    printf("\nCuboid Surface Area: %.2f", cbA);

    float cR, cH;
    printf("Enter cylinder radius:");
    scanf("%f", &cR);
    printf("Enter cylinder height:");
    scanf("%f", &cH);

    float cV = PI*cR*cR*cH;
    printf("\nCylinder Volume: %.2f", cV);

    float cA = PI*cR*cR*(cR+cH);
    printf("\nCylinder Surface Area: %.2f", cA);
}
