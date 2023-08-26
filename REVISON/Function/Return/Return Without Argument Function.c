#include<stdio.h>

int name();

int main(){

    int var=name();
    printf("\nTotal : %d",var);
    return 0;
}

int name(){
 int a,b;
 printf("\nEnter a&b value : ");
 scanf("%d%d",&a,&b);
 return (a+b);
}
