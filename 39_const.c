#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[3]={'a','b','c'};
    const char *const p=a;

    printf("\n *p = %c",*p);
    *p='x';

    printf("\n *p = %c",*p);
    return 0 ;
}
/*
CASE 1::DATA operetion not but  pointer operation work

    char a[3]={'a','b','c'};
    const char *p=a;
    printf("\n *p = %c",*p);
    //*p='x'
    p++;
    printf("\n *p = %c",*p);
*/
/*
CASE 2 ::DATA operetion not but  pointer operation work

    char a[3]={'a','b','c'};
    char const *p=a;
    printf("\n *p = %c",*p);
    //*p='x'
    p++;
    printf("\n *p = %c",*p);
*/
/*
CASE 3::DATA operetion work but  pointer operation not

    char a[3]={'a','b','c'};
    char *const p=a;

    printf("\n *p = %c",*p);
    *p='x';

    printf("\n *p = %c",*p);
    return 0 ;
*/
/*
CASE 4::DATA operetion and pointer operation not

    char a[3]={'a','b','c'};
    const char *const p=a;

    printf("\n *p = %c",*p);
    *p='x';

    printf("\n *p = %c",*p);
*/
