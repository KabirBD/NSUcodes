#include<stdio.h>
int main()
{
    int n , i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("The elements of array are : ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int firstLarge = arr[0];
    int secondLarge = arr[1];
    int firstSmall = arr[0];
    int secondSmall =arr[1];
    for(i = 0; i < n ; i++)
    {
        if(arr[i] > firstLarge)
        {
            secondLarge = firstLarge;
            firstLarge = arr[i];   
        }
        if(arr[i] < firstSmall)
        {
            secondSmall = firstSmall;
            firstSmall = arr[i];   
        }
    }
    printf("Second large number is : %d\n",secondLarge);
    printf("Second small number is : %d",secondSmall);
}