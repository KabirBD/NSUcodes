#include<stdio.h>
#include<math.h>
#define PI 3.14
void main(){
float radius, height;
printf("Enter the radius: ");
scanf("%f", &radius);

printf("\nEnter the height: ");
scanf("%f", &height);

float volume = (1/3.0)*PI*radius*radius*height;
float slantHeight = sqrt(pow(radius,2)+pow(height,2));
float surfaceArea = (PI*radius*radius) + (PI*radius*slantHeight);

printf("\nVolume of the cone is: %.2f", volume);
printf("\nSurface area of the cone is: %.2f", surfaceArea);
}
