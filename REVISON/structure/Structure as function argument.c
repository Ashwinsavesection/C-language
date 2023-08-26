#include<stdio.h>

struct examble
{
    char *name;
    int age;
    float per;
};

void display(struct examble s)
{
    printf("\nName   : %s",s.name);
    printf("\nAge    : %d",s.age);
    printf("\nName   : %0.2f",s.per);
}

int main()
{
    struct examble o={"Ashiwn",15,70.55};
    display(o);
    return 0;
}

