#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);

    for(int i=m; i<=n; i++){
        if(i%3==0) continue;
        if(i%2==0) printf("%d, ", i);
    }
}