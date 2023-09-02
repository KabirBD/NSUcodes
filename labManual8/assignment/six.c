#include <stdio.h>
void main()
{
    int amount, price, sumAmount=0, sumPrice=0;

    while(1){
        printf("Enter amount (in kg): ");
        scanf("%d", &amount);

        if(amount==0){
            printf("Total amount (in kg): %d, Total price: %d, Average price per kg: %.2f", sumAmount, sumPrice, (float)sumPrice/sumAmount);
            break;
        }
        else if(amount<0){
            printf("Invalid input, enter a positive number\n");
            continue;
        }
        else{
            sumAmount += amount;
        }

        printf("Enter price: ");
        scanf("%d", &price);

        if(price<0){
            printf("Invalid input, enter a positive number\n");
            sumAmount -= amount;
            continue;
        }
        else{
            sumPrice += price;
        }
    }
}