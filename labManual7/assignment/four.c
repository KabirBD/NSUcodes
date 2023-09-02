/*
Write a C program to compute the sum of digits of an input number and check if this sum is a prime or not.
Sample Input/Output: 
Enter any integer: 2821
Sum of its digits = 13. It is a prime number
*/

#include<stdio.h>

void main(){

    int n, sum=0;
    printf("Enter a number: "); scanf("%d", &n);

    while(n>0){
        sum +=n%10;
        n/=10;
    }
    printf("The sum of its digits = %d. ",sum );
    int isPrime =1;
    for(int i=2; i<=sum/2; i++){
        if (sum%i==0){
        isPrime = 0;
        break;
        }
    }
    if(isPrime) printf("It is a prime number");
    else printf("It is not a prime number");
}