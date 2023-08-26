#include <stdio.h>
#include <string.h>

struct student// name of the struct
{
    char *name;//set different data type
    int age;//set different data type
    float per;//set different data type

};
int main()
{
    char name;
    int age;
    float per;
    struct student o;//set object of struct

    o.name="Ashwin Kumar";
    o.age=15;
    o.per=65.55;
    printf("\n     name    : %s",o.name);
    printf("\n     age     : %d",o.age);
    printf("\n perncentage : %0.2f\n",o.per);
    return 0;
}
