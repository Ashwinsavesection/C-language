#include<stdio.h>
int main()
{
    int a=10,*p;//*p is pointer variable
    p=&a;//address of a store in p
    printf("\nValue of A         :  %d",a);
    printf("\nAdders of A        :  %d",&a);
    printf("\nValue of p         :  %d",p);
    printf("\nAdders of p        :  %d",&p);
    printf("\np deffernsing      :  %d",*p);
    return 0 ;
}
