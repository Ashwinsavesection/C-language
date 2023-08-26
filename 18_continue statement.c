#include<stdio.h>
int main()
{

    int a=1,b,c=0,d;
    printf("\nTotal digits : ");
    scanf("%d",&d);
    while (a<=d)
    {
        printf("\nEnter %d numper : ",a);
        scanf("%d",&b);
        if (b==0)
        {
            continue;
        }
        c=c+b;
        a++;

    }
    printf("\nTotal : %d",c);
    return 0 ;
}
