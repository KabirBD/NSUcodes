#include<stdio.h>
#define PI 3.14
void main()
{
float arcLength, radius;

printf("Enter arc length: ");
scanf("%f", &arcLength);

printf("\nEnter radius: ");
scanf("%f", &radius);

float angleRad = arcLength/radius;
float angleDegree = angleRad*180/PI;

printf("Angle of the segment is: %.2f Radians", angleRad);
printf("\nAngle of the segment is: %.2f Degrees", angleDegree);
}
