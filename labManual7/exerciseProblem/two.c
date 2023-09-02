/*
Write a C program to check whether an input number is a perfect number or not. A perfect number is a positive 
integer which is equal to the sum of its proper positive factors. For e.g. 6 is a perfect number; because proper 
factors of 6 are 1, 2, 3 and 1+2+3 = 6. Also, 28 is a perfect number since sum of its factors = 1+2+4+7+14 = 28
*/

#include<stdio.h>

void main(){

    int n, sum=0;
    printf("Enter a number: "); scanf("%d", &n);

    for(int i=1; i <=n/2; i++){
        if( n%i == 0) sum += i;
    }
    
    if(n == sum) printf("%d is a perfect number", n);
    else printf("%d is not a perfect number", n);
}