#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\n Enter The Limit : ");
    scanf("%d",&n);
    int *p=(int *)calloc(n,sizeof(int));
    int re;
    printf("\nDo You Want reallocation yes = 1  : ");
    scanf("%d",&re);
    if(re==1)
    {
            printf("\n Enter The Limit : ");
            scanf("%d",&n);
            p=(int *)realloc(p,n*sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        printf("\nEnter The Value  %d : ",i);
        scanf("%d",p+i);
    }
    printf("\n sno   address     value");
    for(int i=0;i<n;i++)
    {
        printf("\n %d  |  %d  |  %d",i,p+i,*(p+i));
    }
    return 0;
}


