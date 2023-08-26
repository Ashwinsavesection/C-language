
#include<stdio.h>

void add(int,int);//1.function declatration

int main()
{
    int a,b;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("\nEnter the value of B : ");
    scanf("%d",&b);
    //function calling
    add(a,b);//acctual parameters
    return 0 ;
}
void add(int a,int b)//formal parameters
{

    int c;

    c=a+b;
    printf("\nTotal                : %d ",c);
    printf("\n========================== ");

}

