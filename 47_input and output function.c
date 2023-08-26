#include<stdio.h>

int main()
{
    int a;
    char c;
    char name[50];
    printf("\nEnter the value : ");
    scanf("%d",&a);
    printf("\na : %d",a);
    printf("\nEnter The Character : ");

    fflush(stdin);
    c=getchar();
    putchar(c);
    printf("\nEnter the Name : ");
    fflush(stdin);
    gets(name);
    puts(name);
    return 0;
}
