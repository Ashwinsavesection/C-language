#include<stdio.h>

int main()
{
    char str[100];
    int i;
    printf("\nEnter the string :  ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    puts(str);
    return 0;
}

