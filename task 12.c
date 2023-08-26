#include<stdio.h>

int main()
{
    float price,profit,cost;
    printf("\nEnter selling price : ");
    scanf("%f",&price);
    printf("\nEnter profit : ");
    scanf("%f",&profit);
    cost=(price-profit)/15;
    printf("\nsingle cost 1 pice : %0.2f",cost);
    return 0;
}
