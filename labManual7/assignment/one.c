/*
Write a C program to enter any number from user and find the reverse of a given number using loop
*/

#include<stdio.h>

void main(){

    int n;
    printf("Enter a number: "); scanf("%d", &n);

    printf("Reverse of %d is: ", n);
    while(n>0){
    printf("%d", n%10);
    n/=10;
    }

}