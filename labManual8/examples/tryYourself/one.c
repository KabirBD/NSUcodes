#include <stdio.h>
void main()
{
 int n,r,m=1,d=1;
 printf("Enter n and r: ");
 scanf("%d %d", &n, &r);
 //compute n!
 for(int i=1;i<=n;i++)
 m*=i;
 //compute (n-r)!
 for(int i=1;i<=r;i++)
 d*=i;
 for(int i=1;i<=n-r;i++)
 d*=i;
 printf("nCr = %d", m/d);
}
