
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,y,o;
    y=1;
    o=1;
    printf("\nEnter The Limit :  ");
    scanf("%d",&n);

    int *ptr=(int*)malloc(n*sizeof(int));
    if (ptr==NULL)
    {
        printf("Memory Not Allacate");
        exit(1);
    }
    for (i=0;i<n;i++)
    {

        printf("\nEnter a integer %d :  ",y);
        scanf("%d",(ptr+i));
        y++;
    }
    for (i=0;i<n;i++)
    {
        printf("\n%d : %d   ",o,*(ptr+i));
        o++;
    }
    return 0;
}
