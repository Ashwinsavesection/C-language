#include<stdio.h>

struct student
{
    char *name;
    int age;
    float per;
};

int main()
{
    struct student o={"Ashwin kumar",15,50.5};//initializing

    printf("\nName      : %s",o.name);//accecesing
    printf("\nAge       : %d",o.age);
    printf("\nmark      : %0.2f",o.per);
    return 0;
}
