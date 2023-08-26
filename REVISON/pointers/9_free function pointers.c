#include<stdio.h>
#include<stdlib.h>


int main()
{

    int i,tot;
    int limit;
    printf("\nEnter The limit : ");
    scanf("%d",&limit);
    int *p=calloc(limit,sizeof(int));
    for(int i=0;i<limit;i++)
    {
        printf("\nEnter %d value : ",i+1);
        scanf("%d",p+i);
    }
    for(int i=0;i<limit;i++)
    {
        tot+=*(p+i);
    }
    printf("\nTotal : %d",tot);
    free(p);

    return 0;
}

