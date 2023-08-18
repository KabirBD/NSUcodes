/*
 Write C Program to calculate the tax from salary using the following table. 
The formula for tax is: tax = (base tax) + (percentage of excess)*(salary – 
min. salary in the salary range). For e.g., if the salary is 32000, then 
tax=5400+(22/100)*(32000-30000) = 5400+440=5840.
*/

#include <stdio.h>
void main()
{
    float salary, tax;
    printf("Enter your Salary : "); 
    scanf("%f", &salary);

    if(salary>=0 && salary <=14999.99){
        tax = (15.0/100)*(salary);
        printf("TAX: %.2f", tax);
    }
    else if(salary>=15000 && salary <=29999.99){
        tax = 2250 + (18.0/100)*(salary-15000);
        printf("TAX: %.2f", tax);
    }
    else if(salary>=30000 && salary <=49999.99){
        tax =5400 + (22.0/100)*(salary-30000) ;
        printf("TAX: %.2f", tax);
    }
    else if(salary>=50000 && salary <=79999.99){
        tax = 11000 + (27.0/100)*(salary-50000);
        printf("TAX: %.2f", tax);
    }
    else if(salary>=80000 && salary <=150000){
        tax = 21000 + (33.0/100)*(salary-80000);
        printf("TAX: %.2f", tax);
    }
}