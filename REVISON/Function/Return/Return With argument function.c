#include<stdio.h>

int exa(int,int);

void main(){
    int a,b;
    printf("\nEnter A Value  : ");
    scanf("%d",&a);
    printf("\nEnter B Value : ");
    scanf("%d",&b);
    int tot=exa(a,b);
    printf("\nTotal : %d",tot);
}

int exa(a,b){
    int cal;
    cal=a+b;
    return cal;
}
