

#include<stdio.h>

int add();//1.function declatration

int main()
{
    int a;
    a=add();//function calling
    printf("\nTotal : %d",a);
    return 0 ;
}
int add()
{

    int a,b;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("\nEnter the value of B : ");
    scanf("%d",&b);
    return a+b;

}
