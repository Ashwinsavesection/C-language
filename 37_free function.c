#include<stdio.h>
#include<stdlib.h>
int *getting()
{
    int i;
    int *ptr=(int *)malloc(3*sizeof(int));
    for (i=1;i<=3;i++)
    {
        printf("\nEnter %d number : ",i);
        scanf("%d",ptr+i);
    }
    return ptr;
}

int main()
{
    int i,n=0;
    int *ptr=getting();
    for (i=1;i<=3;i++)
    {
        n+=*(ptr+i);
    }
    printf("\nTotal : %d",n);
    free(ptr);
    ptr=NULL;
    return 0 ;
}
