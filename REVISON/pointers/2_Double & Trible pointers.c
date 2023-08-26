#include<stdio.h>

int main()
{
    int *p1;//single pointer
    int **p2;//double pointer
    int ***p3;//trible pointer
    int a=10;
    p1=&a;
    printf("\n  a Value           : %d ", a);
    printf("\n  a address         : %d ",&a);
    printf("\n  P1 Value          : %d ", p1);
    printf("\n *P1 address        : %d ",&p1);
    printf("\n---------------------------");
    printf("\n      second pointer       ");
    printf("\n---------------------------");
    p2=&p1;
    printf("\n  p1 Value          : %d ", p1);
    printf("\n  p1 address        : %d ",&p1);
    printf("\n  p2 Value          : %d ",p2);
    printf("\n *P2 address        : %d ",&p2);
    printf("\n---------------------------");
    printf("\n      third pointer       ");
    printf("\n---------------------------");
    p3=&p2;
    printf("\n  p2 Value          : %d ", p2);
    printf("\n  p2 address        : %d ",&p2);
    printf("\n  p3 Value          : %d ",p3);
    printf("\n *P3 address        : %d ",&p3);
    printf("\n value of a         : %d ",**p3);

    return 0;
}

