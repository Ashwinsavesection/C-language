#include<stdio.h>

struct examble
{
    char *name;
    int age;
    float per;
};

int main()
{
    struct examble o[2];

    o[0].name="ashiwn";
    o[0].age=15;
    o[0].per=15.44;

    o[1].name="ashiwn";
    o[1].age=15;
    o[1].per=15.44;


    printf("\nName o[0] : %s",o[0].name);
    printf("\nAge  o[0] : %d",o[0].age);
    printf("\nper  o[0] : %f",o[0].per);

    printf("\nName o[1] : %s",o[1].name);
    printf("\nAge  o[1] : %d",o[1].age);
    printf("\nper  o[1] : %f",o[1].per);

    return 0;
}
