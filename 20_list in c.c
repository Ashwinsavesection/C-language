#include<stdio.h>
int main()
{
    int i,a[100],n;
    printf("\nEnter The limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter %d Value : ",i);
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++)
    {
        printf("\n%d",a[i]);


    }
    return 0 ;
}
