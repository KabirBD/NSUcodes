/*
 Check if the roots of the equation: ax2+bx+c=0 are real or not. If they are real, then print them; 
otherwise print “No real root exist.” Read a,b,c from user.

*/

#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c,d;
    float x1, x2;
    printf("Enter the values for a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b*b-4*a*c;
    if(d==0)
    {
        x1 = -b/(2.0*a);
        x2 = x1;
        printf("Both roots are equal.\n");
        printf("x1: %.2f and x2: %.2f", x1, x2);
    }
    else if(d>0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("x1: %.2f and x2: %.2f", x1, x2);
    }
    else
    {
        printf("No real roots");
    }
}
