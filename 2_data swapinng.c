#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\nEnter 1 number : ");
    scanf("%d",&a);
    printf("\nEnter 2 number : ");
    scanf("%d",&b);
    printf("\na : %d      b : %d",a,b);
    printf("\n========================");
    printf("\n     data swaping");
    printf("\n========================");
    c=b;
    b=a;
    a=c;
    printf("\na : %d      b : %d",a,b);

    return 0;
}
