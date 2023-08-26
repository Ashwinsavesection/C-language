#include<stdio.h>

int main()
{
    int amt;
    printf("\nEnter the amount to withtra : ");
    scanf("%d",&amt);
    printf("\nRequired Notes of Rs 100 : %d",(amt/100));
    printf("\nRequired notes of RS 50 :%d",((amt%100)/50));
    printf("\nRequired notes of RS 10 :%d",(((amt%100)%50)/10));
    printf("\nbalance :%d",(((amt%100)%50)%10));
    return 0;
}
