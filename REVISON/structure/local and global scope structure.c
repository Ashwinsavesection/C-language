#include <stdio.h>
#include <string.h>

struct student      //g
{                   //g
    char *name;     //g   Global scope
    int age;        //g
    float per;      //g

};
int main()
{
    struct student o;

    struct student1     //l
    {                   //l
        char *name;     //l   // Local scope
        int age;        //l
        float per;      //l

    }o1;

    printf("\n  Global scope \n");

    o.name="Ashwin Kumar";
    o.age=15;
    o.per=65.55;

    printf("\n     name    : %s",o.name);
    printf("\n     age     : %d",o.age);
    printf("\n perncentage : %0.2f\n",o.per);

    printf("\n   local scope \n");

    o1.name="Akash";
    o1.age=6;
    o1.per=56.66;

    printf("\n     name    : %s",o1.name);
    printf("\n     age     : %d",o1.age);
    printf("\n perncentage : %0.2f\n",o1.per);
    return 0;
}

