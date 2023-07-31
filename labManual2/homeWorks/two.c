#include <stdio.h>
#include <math.h>
int main()
{
    // Compute the value of ax^2+bx+c ; value of a, b, c are read from user
    float a, b, c;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    float result1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    float result2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    // printf("%f", result1);
    printf("\n The solutions of %.0fx^2+%.0fx+%.0f are: %f \t %f", a, b, c, result1, result2);
}