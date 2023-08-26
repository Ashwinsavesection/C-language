#include <stdio.h>
#include <string.h>

struct student
{
    char *name;

};
int main()
{

    struct student o={"ashiwn"};
    struct student *ptr=&o;

    printf("\n     value of ptr    : %d",ptr);
    printf("\n     value of o      : %s",ptr->name);

    return 0;
}
