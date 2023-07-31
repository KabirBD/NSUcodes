#include<stdio.h>
#include<math.h>
int main() {
    // Compute the value of 5x^3-4x^2+sqrt(x)+3 ; value of x is read from user
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    float result = 5*pow(x,3)-4*pow(x,2)+sqrt(x)+3;
    printf("\nThe value of 5x^3-4x^2+sqrt(x)+3 for x=%d is: %f", x, result);

}