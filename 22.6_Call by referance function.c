#include<stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a,b;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("\nEnter the value of B : ");
    scanf("%d",&b);
    printf("\nBefore swap A : %d | b : %d ",a,b);
    swap(&a,&b);
    printf("\nAfter swap  A : %d | b : %d ",a,b);
    return 0 ;
}
