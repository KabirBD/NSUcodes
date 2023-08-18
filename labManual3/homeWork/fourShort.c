#include<stdio.h>
void main()
{
    int rem, nts[8]= {500,100,50,20,10,5,2,1};
    printf("Enter amount: ");
    scanf("%d", &rem);
    for(int i=0; i<=7; i++)
    {
        printf("\n%d: %d",nts[i],rem/nts[i]);
        rem%=nts[i];
    }
}
