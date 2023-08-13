#include <stdio.h>

void main()
{
    int totalBill, n500, n100, n50, n20, n10, n5, n2, n1;
    printf("Enter amount: ");
    scanf("%d", &totalBill);

    printf("Enter number of notes:\n");
    printf("500: ");
    scanf("%d", &n500);

    printf("100: ");
    scanf("%d", &n100);

    printf("50: ");
    scanf("%d", &n50);

    printf("20: ");
    scanf("%d", &n20);

    printf("10: ");
    scanf("%d", &n10);

    printf("5: ");
    scanf("%d", &n5);

    printf("2: ");
    scanf("%d", &n2);

    printf("1: ");
    scanf("%d", &n1);

    int t500 = 500*n500, t100 = 100*n100, t50 = 50*n50, t20 = 20*n20, t10 = 10*n10, t5 = 5*n5, t2 = 2*n2, t1 = n1;
    int totalMoney = t500+t100+t50+t20+t10+t5+t2+t1;

    if(totalMoney>=totalBill)
    {
        int remaining = totalMoney;
        printf("farhan can pay bill\n");

        for(int i=n500; i >=0; i--)
        {
            if(remaining>=i*500)
            {
                printf("500: %d\n", i);
                remaining -= i*500;
            }
        }
        for(int i=n100; i >=0; i--)
        {
            if(remaining>=i*100)
            {
                printf("100: %d\n", i);
                remaining -= i*100;
            }
        }
        for(int i=n50; i >=0; i--)
        {
            if(remaining>=i*50)
            {
                printf("50: %d\n", i);
                remaining -= i*50;
            }
        }
        for(int i=n20; i >=0; i--)
        {
            if(remaining>=i*20)
            {
                printf("20: %d\n", i);
                remaining -= i*20;
            }
        }
        for(int i=n10; i >=0; i--)
        {
            if(remaining>=i*10)
            {
                printf("10: %d\n", i);
                remaining -= i*10;
            }
        }
        for(int i=n5; i >=0; i--)
        {
            if(remaining>=i*5)
            {
                printf("5: %d\n", i);
                remaining -= i*5;
            }
        }
        for(int i=n2; i >=0; i--)
        {
            if(remaining>=i*2)
            {
                printf("2: %d\n", i);
                remaining -= i*2;
            }
        }
        for(int i=n1; i >=0; i--)
        {
            if(remaining>=i)
            {
                printf("1: %d\n", i);
                remaining -= i;
            }
        }
    }
    else
    {
        printf("farhan can not pay bill");
    }
}
