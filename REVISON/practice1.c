#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int a=0,n=0,sp=0;
    printf("Enter Your Word : ");
    gets(name);

    for(int i=0;name[i]!='\0';i++)
    {
        if((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122))
            a++;
        else if((name[i]>=48 && name[i]<=57))
            n++;
        else
            sp++;
    }
    printf("\nTotal Alphabets : %d",a);
    printf("\nTotal Digits    : %d",n);
    printf("\nTotal Special   : %d",sp);
    return 0;
}
