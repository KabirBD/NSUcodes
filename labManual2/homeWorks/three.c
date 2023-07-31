#include <stdio.h>
#include <math.h>
int main()
{
    // Find the volume of a cube
    int side;
    printf("Find the volume of a cube:\n");
    printf("\tEnter length of one side: ");
    scanf("%d", &side);
    int vol = pow(side, 3); // Cube formula V=l^3
    printf("\n\tThe Volume is %d cubic units.\n", vol);

    // Find the volume of a cylinder
    int radius, height;
    float pi = 3.1416;
    printf("\n\nFind the volume of Cylinder\n");
    printf("\tEnter Radius:");
    scanf("%d", &radius);
    printf("\tEnter Height:");
    scanf("%d", &height);
    double cylinderVolume = pi * pow(radius, 2) * height;
    printf("\n\tVolume Of The Cylinders Is %.3lf Units.", cylinderVolume);
}