/*
Write a program to compute the following series using while loop: 5^2+9^2+15^2+23^2+....+n^2
*/

#include<stdio.h>

void main(){
    int n, sum=0,  i=5, adder=4;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i<=n){
        sum += i*i;
        i +=adder;
        adder+=2;
    }
    printf("Sum = %d", sum);
}