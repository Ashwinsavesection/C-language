#include<stdio.h>
/*
    * * * * *
    * * * *
    * * *
    * *
    *

*/
int main()
{
    int n,i,j;//  n= count of stars : i= rows : j= columns
    n=6;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    /*
    n=5  i=0  n-i=5
    n=5  i=1  n-i=4
    n=5  i=2  n-i=3
    n=5  i=3  n-i=2
    n=5  i=4  n-i=1
    */
    return 0;
}

