#include<stdio.h>
int main()
{
    int day,fees;
    printf("\nEnter Book Days : ");
    scanf("%d",&day);
    if (day==0)
    {
        printf("\nGood No Fine");
    }
    else if(day>=1&&day<=5)
    {
        fees=day*0.50;
        printf("\nYour Fess : %d",fees);
    }
    else if(day>=6&&day<=10)
    {
        fees=day*1;
        printf("\nYour Fess : %d",fees);
    }
    else if(day>=11&&day<=30)
    {
        fees=day*5;
        printf("\nYour Fess : %d",fees);
    }
    else
    {
        printf("\nMembership Cancel");
    }
    return 0 ;
}
