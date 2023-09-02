/*
Write a C program to read a number from user and check whether given number is a palindrome or not. A number 
is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome but 2345 is not.
*/

#include<stdio.h>

void main(){

    int n, rev=0;
    printf("Enter a number: "); scanf("%d", &n);

    int rem =n;
    if(n>9)
    while(rem>0){
        rev = rev*10 + rem%10;
        rem/=10;
    }
    if(n==rev) printf("%d is a palindromic number", n);
    else printf("%d is not a palindromic number", n);

}