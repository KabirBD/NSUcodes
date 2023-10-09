#include <stdio.h>

void main()
{
    int l;
    printf("Enter Length of array: ");
    scanf("%d", &l);
    int a[l];

    for (int i = 0; i < l; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0], min2 = a[0], max2 = a[0];
    
    for (int i = 0;; i++)
    {
        if (a[i] != min)
        {
            min2 = a[i];
            break;
        }
    }
    for (int i = 0;; i++)
    {
        if (a[i] != max)
        {
            max2 = a[i];
            break;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if (a[i] < min)
        {
            min2 = min;
            min = a[i];
        }

        if (a[i] > max)
        {
            max2 = max;
            max = a[i];
        }
    }

    printf("\n2nd largest element of array is: %d", max2);
    printf("\n2nd smallest element of array is: %d", min2);
}