/*
Read a character from user and check if it is a valid hexadecimal digit or not. Hint: a char is a valid
hexadecimal digit if it is one of these characters: ‘0’, ‘1’, ... , ‘9’, ‘a’, ’b’, ... , ’f’, ‘A’,’B’, ... ,’F’
*/

#include<stdio.h>

void main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c", &ch);

    if((ch>='0' && ch<='9') || (ch>='a' && ch<='f') || (ch>='A' && ch<='F'))
    {
        printf("Valid hexadecimal digit");
    }
    else
    {
        printf("Invalid hexadecimal digit");
    }
}
