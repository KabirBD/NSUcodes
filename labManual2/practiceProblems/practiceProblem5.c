#include <stdio.h>
#include <math.h>
void main()
{

    // 5. Finding the last digit and other digits of an integer
    int n = 2342;
    int lastDigit = n % 10;
    int remainingDigits = n / 10;
    printf("\nLast Digit:%d \t Remaining Digits:%d", lastDigit, remainingDigits);
}