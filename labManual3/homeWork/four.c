#include<stdio.h>

void main()
{
    int totalAmount, remaining;
    printf("Enter amount: ");
    scanf("%d", &totalAmount);

    int _500 = totalAmount/500;
    remaining = totalAmount%500;
    printf("\n500: %d", _500);

    int _100 = remaining/100;
    remaining = remaining%100;
    printf("\n100: %d", _100);

    int _50 = remaining/50;
    remaining = remaining%50;
    printf("\n50: %d", _50);

    int _20 = remaining/20;
    remaining = remaining%20;
    printf("\n20: %d", _20);

    int _10 = remaining/10;
    remaining = remaining%10;
    printf("\n10: %d", _10);

    int _5 = remaining/5;
    remaining = remaining%5;
    printf("\n5: %d", _5);

    int _2 = remaining/2;
    remaining = remaining%2;
    printf("\n2: %d", _2);

    int _1 = remaining;
    printf("\n1: %d", _1);
}
