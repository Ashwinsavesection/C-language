#include<stdio.h>

struct names
{
    char *name;
    int age;
    int std;
};
int main()
{
    struct names o[2];
    o[0].name="ashwin  kumar";
    o[0].age=15;
    o[0].std=9;

    o[1].name="kishor";
    o[1].age=13;
    o[1].std=8;

    o[2].name="sarithira";
    o[2].age=10;
    o[2].std=6;
    printf("\n======================");
    printf("\nName : %s",o[0].name);
    printf("\nage  : %d",o[0].age);
    printf("\nstd  : %d",o[0].std);
    printf("\n======================");
    printf("\nName : %s",o[1].name);
    printf("\nage  : %d",o[1].age);
    printf("\nstd  : %d",o[1].std);
    printf("\n======================");
    printf("\nName : %s",o[2].name);
    printf("\nage  : %d",o[2].age);
    printf("\nstd  : %d",o[2].std);
    return 0 ;
}
