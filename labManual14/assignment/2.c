#include <stdio.h>

void main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d values: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int key, count = 0;
    printf("Enter search key: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    printf("Result: ");
    for(int i=0; i<n-count; i++){
        printf("%d,",arr[i]);
    }
}
