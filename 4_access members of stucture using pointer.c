#include<stdio.h>

typedef struct names
{
    char *name;
    int age;
    int std;
}o;
int main()
{
    o a={"ashwin",15,9};
    o *ptr=&a;

    printf("\nName : %s",(*ptr).name);
    return 0;
}
