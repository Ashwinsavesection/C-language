#include<stdio.h>

int main()
{
    int *p;//declare variable of pointer first enter star
    int a=10;
    p=&a;//Align address of value
    printf("\n  a Value          : %d ", a);// normal value of a
    printf("\n  a address        : %d ",&a);// normal address of a
    printf("\n  P Value          : %d ", p);// p value = normal address of a
    printf("\n *P address value  : %d ",*p);// dereferencing of p : jumped value of a

    return 0;
}
