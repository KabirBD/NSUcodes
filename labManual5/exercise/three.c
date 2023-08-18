/*
 Use switch case to make a simple calculator that can add, subtract, multiply or divide two input
numbers. The operator (+ , - , * or /) should also be read from user.
*/

#include <stdio.h>
void main()
{
    float n1, n2;
    char op;
    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("\nEnter operator: ");
    scanf(" %c", &op);

    printf("\nEnter second number: ");
    scanf("%f", &n2);

    switch (op)
    {
    case '+': printf("Sum = %f", n1+n2); break;
    case '-': printf("Difference = %f", n1-n2); break;
    case '*': printf("Multiplication = %f", n1*n2); break;
    case '/': printf("Division = %f", n1/n2); break;
    }
}