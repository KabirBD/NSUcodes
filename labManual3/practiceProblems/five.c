#include<stdio.h>

void main(){
char a;
printf("Enter a lowercase letter:");
scanf("%c", &a);
a -= 32;
printf("Uppercase of the given letter is: %c", a);
++a;
printf("\nUppercase of next letter is: %c", a);
}
