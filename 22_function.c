#include<stdio.h>

void add()
{
    int a,b,c;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("\nEnter the value of B : ");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal                : %d ",c);
    printf("\n========================== ");
}
int main()
{
    int li,i;
    printf("\nEnter the limit : ");
    scanf("%d",&li);
    for(i=0;i<=li;i++)
    {
        add();
    }
    return 0 ;
}
