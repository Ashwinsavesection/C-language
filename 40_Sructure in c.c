
#include<stdio.h>

struct student
{
    char *name;
    int age;
    float per;
};
int main()
{
    struct student a;
    struct student o;
    o.name="ashwin kumar";
    o.age=15;
    o.per=34.56;

    printf("\nName      : %s",o.name);
    printf("\nAge       : %d",o.age);
    printf("\nmark      : %0.2f",o.per);

    a.name="Akash";
    a.age=16;
    a.per=30.56;

    printf("\nName      : %s",a.name);
    printf("\nAge       : %d",a.age);
    printf("\nmark      : %0.2f",a.per);

    return 0 ;
}
