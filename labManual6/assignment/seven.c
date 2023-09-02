/*
Write a C program to compute the value of nPr = n*(n-1)*(n-2)*…*(n-r+1), read n and r from user.
*/

#include<stdio.h>

void main(){
    int base, power, result=1;
    printf("Enter vale of base and power: "); scanf("%d", &base); scanf("%d", &power);
    for(int i=1; i<=power; i++) result *=base;

    printf("%d to the power %d = %d", base, power, result);
}