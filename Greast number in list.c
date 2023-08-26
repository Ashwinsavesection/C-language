#include<stdio.h>

int main()
{
    int i,n,t,a[100];
    printf("\nEnter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter The value : ");
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=1;i<n;i++)
    {
        if(t<a[i])
        {
            t=a[i];
        }
    }
    printf("\nGretest num of : %d",t);
    return 0;
}
