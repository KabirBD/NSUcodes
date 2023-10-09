#include <stdio.h>

int main()
{
    const char *array[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraySize; i++)
    {
        printf("%s\n", array[i]);
    }

    return 0;
}