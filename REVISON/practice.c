#include<stdio.h>

int main()
{
    int choise,qty,tot,con;
    hi:
    printf("\n\t\tMENU CARD");
    printf("\n\t1.COFFEE           RS:15");
    printf("\n\t2.TEA              RS:10");
    printf("\n\t3.COLD COFFEE      RS:25");
    printf("\n\t4.MILK SHAKE       RS:50");
    printf("\n\nEnter Your Choise : ");
    scanf("%d",&choise);
    switch(choise){
case 1:
    printf("\nyou have selected COFFEE");
    printf("\nEnter The Quantity : ");
    scanf("%d",&qty);
    tot+=(qty*15);
    qty=0;
    break;

case 2:
    printf("\nyou have selected TEA");
    printf("\nEnter The Quantity : ");
    scanf("%d",&qty);
    tot+=(qty*10);
    qty=0;
    break;

case 3:
    printf("\nyou have selected COLD COFFEE");
    printf("\nEnter The Quantity : ");
    scanf("%d",&qty);
    tot+=(qty*25);
    qty=0;
    break;

case 4:
    printf("\nyou have selected MILK SHAKE");
    printf("\nEnter The Quantity : ");
    scanf("%d",&qty);
    tot+=(qty*50);
    qty=0;
    break;

default:
    printf("\n invalid no");}
    printf("\n\nDo you want to continue 1 : ");
    scanf("%d",&con);
    if(con==1){goto hi;}
    else{printf("\nTotal : %d",tot);}
    printf("\n\nThanks for coming \n");
    return 0;
}
