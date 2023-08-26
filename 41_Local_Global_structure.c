#include<stdio.h>

struct student//global scope structers
{
    char *name;
    int age;
    float per;
};
void total()
{
    struct mark//global scope structers
    {
        int m1,m2,m3;
    }s;//s for structer name
    s.m1=50;
    s.m2=50;
    s.m3=50;
    printf("\nmark-1   :  %d",s.m1);
    printf("\nmark-2   :  %d",s.m2);
    printf("\nmark-3   :  %d",s.m3);
}
int main()
{
    total();

    return 0;
}
