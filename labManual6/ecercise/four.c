/*
Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3
*/

#include<stdio.h>

void main(){
    int n, sum=0,  i=2;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i<=n){
        sum += i*i*i;
        i +=3;
    }
    printf("Sum = %d", sum);
}