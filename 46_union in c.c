#include<stdio.h>

struct demo
{
    int a;
    char b;
};
union udemo
{
    int a;
    char b;
};
int main()
{
    /*
    printf("Indeger   : %d",sizeof(int));
    printf("\nchar    : %d",sizeof(char));
    printf("\nunion   : %d",sizeof(union udemo));
    printf("\nstruct    : %d",sizeof(struct demo));*/
    union udemo i;
    i.a=65;
    printf("\nunion a : %d",i.a);
    printf("\nunion b : %c",i.b);
    return 0 ;

}
