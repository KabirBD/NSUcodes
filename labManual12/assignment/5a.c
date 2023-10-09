#include<stdio.h>
#include<math.h>
double roundedValue(double num , int deci);
int main()
{
    double n;
    int d;
    
    printf("Enter n : ");
    scanf("%lf",&n);
    printf("Enter d : ");
    scanf("%d",&d);
    double rounded = roundedValue(n,d);

    printf("Rounded value of %lf up to %d decimal places is %.*lf",n,d,d,rounded);

    return 0;
}
double roundedValue(double num , int deci)
{   
    double rounded = round(num*pow(10,deci))/pow(10,deci);

    return rounded;
}