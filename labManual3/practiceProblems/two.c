#include<stdio.h>

void main(){
int i = 0x3, num = 0x30;
printf("Right shift by %d: %d\n", i, num>>i);
printf("\n");
printf("Left shift by %d: %d\n", i, num<<i);
}
