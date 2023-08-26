#include<stdio.h>

typedef struct names
{
    char *name;
    int age;
    int std;
}o;

void print(o v)//v is formal paramiter
{
    printf("\nName : %s",v.name);
    printf("\nage  : %d",v.age);
    printf("\nstd  : %d",v.std);
}
int main()
{
    o h={"ashwin",15,9};
    print(h);//h is actual parameter

    return 0;
}

