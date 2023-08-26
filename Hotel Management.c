#include<stdio.h>

int main()
{
    int cal,total,ch,con,net;
    ashwin:
    printf("\tHOTEL MANEGMENT");
    printf("\n\t\t1.TEA          : 10 RS");
    printf("\n\t\t2.COFFEE       : 15 RS");
    printf("\n\t\t3.BUFFS        : 30 RS");
    printf("\n\t\t4.COLD COFFEE  : 25 RS");
    printf("\n\t\t5.TEA CAKE     : 20 RS");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nYour Choise Tea");
        printf("\nYour Quatity : ");
        scanf("%d",&cal);
        net+=cal*10;
        break;

    case 2:
        printf("\nYour Choise Coffee");
        printf("\nYour Quatity : ");
        scanf("%d",&cal);
        net+=cal*15;
        break;
    case 3:
        printf("\nYour Choise buffs");
        printf("\nYour Quatity : ");
        scanf("%d",&cal);
        net+=cal*30;
        break;
     case 4:
        printf("\nYour Choise cold coffee");
        printf("\nYour Quatity : ");
        scanf("%d",&cal);
        net+=cal*25;
        break;
     case 5:
        printf("\nYour Choise Tea cake");
        printf("\nYour Quatity : ");
        scanf("%d",&cal);
        net+=cal*15;
        break;
    default:
        printf("\nInvalid selection");
        break;
    }
    printf("\nEnter 1 To Continue : ");
    scanf("%d",&con);
    if (con==1)
    {
        goto ashwin;
    }
    printf("\nTOTAL AMOUNT : %d",net);
    return 0 ;
}
