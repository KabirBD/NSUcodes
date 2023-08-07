#include<stdio.h>
#include<math.h>
void main(){
int m, n;
printf("Enter the value of m: ");
scanf("%d", &m);
printf("\nEnter the value of n: ");
scanf("%d", &n);
printf("\n %d", (int)(m*pow(2, n)));
printf("\n %d", m<<n);
printf("\n %d", (int)(m/pow(2, n)));
printf("\n %d", m>>n);
}
