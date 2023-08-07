#include<stdio.h>
#include<math.h>
void main(){
float base, height;
printf("Enter the base: ");
scanf("%f", &base);

printf("\nEnter the height");
scanf("%f", &height);

float hypotenuse = sqrt(pow(base,2) + pow(height,2));

printf("\nThe hypotenuse is: %.2f", hypotenuse);
}
