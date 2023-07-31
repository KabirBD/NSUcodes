#include <stdio.h>
#include <math.h>
void main()
{

    // 6. Convert days into years,months,weeks,days
    int totalDays = 372;
    int years = totalDays / 365;
    int months = (totalDays % 365) / 30;
    int weeks = ((totalDays % 365) % 30) / 7;
    int remainigDays = ((totalDays % 365) % 30) % 7;
    printf("\n%d Year(s), %d Month(s), %d Week(s), %d Day(s)", years, months, weeks, remainigDays);
    // Another way to Convert days into years,months,weeks,days
    /*
    int totalDays = 372;
    int remainigDays;
    int years = totalDays / 365;
    remainigDays = totalDays % 365;
    int months = remainigDays / 30;
    remainigDays = remainigDays % 30;
    int weeks = remainigDays / 7;
    remainigDays = remainigDays % 7;
    printf("\n%d Year(s), %d Month(s), %d Week(s), %d Day(s)", years, months, weeks, remainigDays);
    */
}