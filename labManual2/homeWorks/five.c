#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temp. in Celsius: ");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("Temp. in Fahrenheit: %.2f", f);

}
