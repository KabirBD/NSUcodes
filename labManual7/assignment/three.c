/*
Write a C program to read any integer from user and compute the reverse of given number. Also output 
whether the reverse number is prime or not. Sample Input/Output: 
Enter any integer: 4521
Reverse number is: 1254. It is not a prime number
*/

#include<stdio.h>

void main(){

    int n, rev=0;
    printf("Enter a number: "); scanf("%d", &n);

    int rem =n;
    while(rem>0){
        rev = rev*10 + rem%10;
        rem/=10;
    }
    printf("Reverse number is: %d. ", rev);

    int isPrime =1;
    for(int i=2; i<=n/2; i++){
        if (rev%i==0){
        isPrime = 0;
        break;
        }
    }
    if(isPrime) printf("It is a prime number");
    else printf("It is not a prime number");
}