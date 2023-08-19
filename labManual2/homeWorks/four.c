#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d%d", &x, &y);

    printf("Quotient when x divided by y: %d\n", x/y);
    printf("Remainder when x divided by y: %d\n", x%y);
    printf("Quotient when y divided by x: %d\n", y/x);
    printf("Remainder when y divided by x: %d\n", y%x);

}
