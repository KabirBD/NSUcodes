#include <stdio.h>

int main()

    {
        int n,i,j,count=1;
        printf("enter n:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++){
                printf("%d",count);
                if(count<9) count++;
                else count=0;
            }
            printf("\n");
        }


    return 0;
}