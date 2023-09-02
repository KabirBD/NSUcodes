/*
 Write a program to display all the letters of the alphabet (a-z). Use two for loops: the 1st one will print all 
letters in small letters and the 2nd one will print them in capital letters.
*/

#include<stdio.h>

void main(){
    for(char c = 'a'; c<='z'; c++) printf("%c ", c);
    printf("\n");
    for(char c = 'A'; c<='Z'; c++) printf("%c ", c);
}