#include<stdio.h>

int main()
{
    int a[]={10,20,30,40,50,89};
    int *p,z;
    p=&a;

    int o=sizeof(a)/sizeof(int);
    printf("\nAddress of A       : %d",&a);
    printf("\nsize of integer    : %d",sizeof(int));
    printf("\nsize of A          : %d",sizeof(a));
    printf("\nlenth of A         : %d",sizeof(a)/sizeof(int));
    printf("\nvalue of p         : %d",p);
    printf("\n========================================");
    for(int i=1;i<=o;i++)
    {

          printf("\nvalue of %d         : %d",i,p);
          p++;
    }
    printf("\n========================================");


    return 0 ;
}
