#include<stdio.h>

int main()
{
    int n,i,j;
    n=5;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++)
        {
            if((i==0) || (i==4) || (j==0) || (j==4)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}



