#include<stdio.h>
typedef struct student//global scope structers
{
    char *name;
    int age;
    float per;
}ash;
int main()
{
    ash o;
    o.name="ashwin kumar";
    o.age=15;
    o.per=34.56;

    printf("\nName      : %s",o.name);
    printf("\nAge       : %d",o.age);
    printf("\nmark      : %0.2f",o.per);



    typedef int integer;
    integer a;
    a=100;
    printf("\nA : %d ",a);
    return 0 ;
}
