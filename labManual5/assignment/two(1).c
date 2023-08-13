#include <stdio.h>
int main()
{
int num=1175, div;
int rem = num;

while(rem >= 1)
{
      div = num/500;
      rem =rem%500;
      printf("500 %d\n", div);


      while(rem >= 100)
      {
       	div = rem/100;
       	rem =rem%100;
       	printf("100 %d\n", div);
      }

      while(rem >= 50)
      {
       	div = rem/50;
       	rem =rem%50;
       	printf("50 %d\n", div);
      }

      while(rem >= 20)
      {
       	div = rem/20;
       	rem =rem%20;
       	printf("20 %d\n", div);
      }

      while(rem >= 10)
      {
       	div = rem/10;
       	rem =rem%10;
       	printf("10 %d\n", div);
      }

      while(rem >= 5)
      {
       	div = rem/5;
       	rem =rem%5;
       	printf("5 %d\n", div);
      }

      while(rem >= 2)
      {
       	div = rem/2;
       	rem =rem%2;
       	printf("2 %d\n", div);
      }

      while(rem >= 1)
      {
       	div = rem/1;
       	rem =rem%1;
       	printf("1 %d", div);
      }
}

}
