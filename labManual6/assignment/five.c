/*
Write a C program to print the multiplication table (নামতা) of any given integer number.
Sample input/output (bold ones are inputs): 
Enter number to print the multiplication table of: 5
*/

#include<stdio.h>

void main(){
    int n;
    printf("Enter number to print the multiplication table of: "); scanf("%d", &n);
    for(int i=1; i<=10; i++) printf("%d * %d = %d\n", n, i, n*i);
}