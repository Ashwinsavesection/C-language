#include<stdio.h>
/*
    *
    * *
    * * *
    * * * *
    * * * * *
*/
int main()
{
    int n,i,j;//  n= count of stars : i= rows : j= columns
    n=5;
    for(i=1;i<=n;i++){

        for(j=0;j<i;j++){
            printf("* ");
        }
    printf("\n");
    }
    printf("\n");
    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
    printf("\n");
    }
    printf("\n");
    for(i=1;i<=n;i++){

        for(j=0;j<i;j++){
            printf("%d ",i);
        }
    printf("\n");
    }

    return 0;
}

