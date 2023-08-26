#include<stdio.h>

int main(){
    int a[5][5],b[5][5],c[5][5];
    int i,j;
    int row,col;
    printf("\nEnter the rows : ");
    scanf("%d",&row);
    printf("\nEnter the column : ");
    scanf("%d",&col);
    printf("\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nEnter value of a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nEnter value of b[%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
    }
    return 0;
}
