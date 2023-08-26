#include<stdio.h>
/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/
int main()
{
    int n,i,j;//  n= count of stars : i= rows : j= columns
    n=5;
    for(i=0;i<n;i++){   //i 5Times run again
        for(j=0;j<n;j++)  //j 5Times run again
            printf("* ");
        printf("\n"); //***** next line
    }
    printf("\n");
    for(i=1;i<=n;i++){   //i 5Times run again
        for(j=0;j<n;j++)  //j 5Times run again
            printf("%d ",i);
        printf("\n"); //***** next line
    }
    printf("\n");
    for(i=0;i<n;i++){   //i 5Times run again
        for(j=1;j<=n;j++)  //j 5Times run again
            printf("%d ",j);
        printf("\n"); //***** next line
    }
    return 0;
}


