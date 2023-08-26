#include<stdio.h>

int main()
{
    int a=10,*p;//*p is SINGLE pointer variable
    int **o;//**o is DOUBLE pointers variable
    int ***r;//***r is TRIBLE pointers variable

    p=&a;//address of a store in p
    printf("\nValue of A         :  %d",a);
    printf("\nAdders of A        :  %d",&a);
    printf("\nValue of p         :  %d",p);
    printf("\nAdders of p        :  %d",&p);
    printf("\n*p deffernsing      :  %d",*p);
    printf("\n================================");
    printf("\n        DOUBLE POINTERS      ");
    printf("\n================================");

    o=&p;//address of p store in **o
    printf("\nValue of p         :  %d",p);
    printf("\nAdders of p        :  %d",&p);
    printf("\nValue of o         :  %d",o);
    printf("\nAdders of o        :  %d",&o);
    printf("\n**o deffernsing    :  %d",**o);
    printf("\n================================");
    printf("\n        TRIBLE POINTERS      ");
    printf("\n================================");
    r=&o;//address of p store in **o
    printf("\nValue of o         :  %d",p);
    printf("\nAdders of o        :  %d",&p);
    printf("\nValue of r         :  %d",o);
    printf("\nAdders of r        :  %d",&o);
    printf("\n***r deffernsing   :  %d",**o);

    return 0 ;
}
