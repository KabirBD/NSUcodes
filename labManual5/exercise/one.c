/*
Write a C program that takes input the first letter of any of the following fruits name–
Mango ---- Tk.500/kg,
Apple ---- Tk.250/kg,
Banana ----Tk. 130/kg,
Cherry -----Tk. 270/kg, and suggests the price of the fruit as output, using switch case.
*/

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter your choice: ");
    scanf("%c", &ch);

    switch(ch){
        case 'M': printf("Mango ---- Tk.500/kg"); break;
        case 'A': printf("Apple ---- Tk.250/kg"); break;
        case 'B': printf("Banana ----Tk. 130/kg"); break;
        case 'C': printf("Cherry -----Tk. 270/kg"); break;
    }
}