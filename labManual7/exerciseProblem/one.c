/*
Write a C program to read an integer from user and output its last and first digit. Hint: Like practice 2 & 3, 
reduce the number by dividing it (by 10) again and again (in a loop) until you reach the first digit.
*/

#include<stdio.h>

void main(){

    int n, lastDigit, firstDigit, rem;
    printf("Enter a number: "); scanf("%d", &n);

    lastDigit = n%10;
    rem=n;
    while(rem>0){
        if(rem<=9) firstDigit = rem;
        rem /=10;
    }
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d", lastDigit);

}