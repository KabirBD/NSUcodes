#include <stdio.h>
#include <math.h>
void main()
{

    // 4. Converting lowercase letter to uppercase
    char lowerCaseCharacter = 'a';
    char upperCaseCharacter = lowerCaseCharacter - 32;
    printf("%c", upperCaseCharacter);

    // Converting uppercase to lowercase
    char UppercaseCharater = 'B';
    char LowercaseCharater = UppercaseCharater + 32;
    printf("\n%c ", LowercaseCharater);
}