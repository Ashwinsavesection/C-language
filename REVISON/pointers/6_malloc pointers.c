#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\n Enter The Limit : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*4);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter The Value  %d : ",i);
        scanf("%d",p+i);
    }

    for(int i=0;i<n;i++)
    {
        printf("\n %d : %u ",i,*(p+i));
    }
    return 0;
}
