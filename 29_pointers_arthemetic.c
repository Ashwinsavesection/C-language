#include<stdio.h>
int main()
{
    int a=10;
    int *p,*r;
    p=&a;
    r=p+1;
    printf("Size of integer : %d ",sizeof(a));
    printf("\nP value         : %d ",p);
    printf("\nR value         : %d ",r);
    return 0;
}
