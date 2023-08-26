#include<stdio.h>

int main()
{
    int a[100],i,l,e=0,o=0;
    printf("\nEnter The Limit : ");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        printf("\nEnter The value of %d  : ",i);
        scanf("%d",&a[i]);
        a[i]%2==0?e++:o++;
    }
    printf("\nTotal Even No is : %d",e);
    printf("\nTotal add  No is : %d",o);
    return 0;
}
