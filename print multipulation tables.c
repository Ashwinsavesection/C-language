#include<stdio.h>

int main()
{
    int i,t,n;
    printf("\nEnter The Table Name  : ");
    scanf("%d",&t);
    printf("\nEnter The limit       : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d X %d = %d",i,t,(t*i));
    }
    return 0;
}
