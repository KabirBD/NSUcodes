#include <stdio.h>
void main()
{
    int i, n1, n2, n3, max, lcm = 1;
    printf("Enter any 3 numbers to find LCM: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = (n1 > n2 && n1>n3) ? n1 : (n2>n1 && n2>n3) ? n2: n3;
    i = max;
    while (1) // while condition is always true (1)
    {
        if (i % n1 == 0 && i % n2 == 0 && i%n3 ==0) // If i is a multiple of both n1 and n2 then i is the LCM of n1 and n2
        {
            lcm = i;
            break; // break out of the loop since LCM has been found
        }
        // we come to the next line if current value of i is not the LCM
        i += max; // values of i are: max, 2*max, 3*max, …, all of which are possible values of LCM
    }
    printf("\nLCM of %d , %d and %d = %d\n", n1, n2, n3, lcm);
}