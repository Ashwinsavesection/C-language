
#include<stdio.h>

int add(int,int);//1.function declatration

int main()
{
    int a,b,e;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("\nEnter the value of B : ");
    scanf("%d",&b);
    e=add(a,b);//function calling
    printf("\nTotal : %d",e);
    return 0 ;
}
int add(int c,int d)
{

    return c+d;
}
