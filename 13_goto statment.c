#include<stdio.h>
int main()
{
    int num,cal=0;
    printf("\nEnter Count num : ");
    scanf("%d",&num);
    hello:
    printf("\n%d",cal);
    cal++;
    if (cal!=num)
    {
        goto hello;
    }
    printf("\nend");

    return 0 ;
}
