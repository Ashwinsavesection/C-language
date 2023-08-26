#include<stdio.h>

int main()
{
    int a=10;
    int *p ;
    p = &a;
    printf("\nSize of integer : %d",sizeof(a));
    printf("\n   P value     : %d",p);
    printf("\n   Addition    : %d",p+1);
    printf("\n   Subraction  : %d",p-1);


    return 0;
}
