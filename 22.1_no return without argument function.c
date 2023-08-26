
#include<stdio.h>

void add();//1.function declatration

int main()
{
    add();//function calling
    return 0 ;
}
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
