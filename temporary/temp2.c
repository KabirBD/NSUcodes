#include <stdio.h>
void main()
{
    const char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n, rev = 0;
    printf("Input: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

    while (rev > 0)
    {
        printf("%s ", words[rev % 10]);
        rev /= 10;
    }
}