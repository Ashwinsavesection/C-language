#include<stdio.h>
int main()
{

    int a=0,bre;
    printf("\nEnter your break num : ");
    scanf("%d",&bre);
    while (a<=100)
    {
        printf("\n%d",a);
        a++;
        if (a==bre)
        {
            break;
        }
    }
    return 0 ;
}
