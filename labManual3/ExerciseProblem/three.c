#include<stdio.h>
#include<math.h>
#define PI 3.14
void main(){
float radius, volume;
printf("Enter the radius of a sphere: ");
scanf("%f", &radius);
volume = (4/3)*PI*radius*radius*radius;
printf("Volume of the sphere is: %f", volume);
}
