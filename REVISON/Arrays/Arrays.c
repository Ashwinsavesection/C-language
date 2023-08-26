#include<stdio.h>

int main(){
    int i,a[20],n;
    printf("\nEnter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter %d value : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("\n value of %d index : %d",(i),a[i]);
    }
    return 0;
}
