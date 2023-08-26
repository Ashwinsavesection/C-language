#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[]={10,20,30,40,50};
    int * const p=a[0];
    *p=20;
    printf("\n *p = %d",*p);

    return 0;
}
