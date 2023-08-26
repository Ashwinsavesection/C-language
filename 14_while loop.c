#include<stdio.h>
int main()
{
    int num,cal=0;
    printf("\nEnter count : ");
    scanf("%d",&num);
    while(cal<=num)
    {
        printf("\n%d",cal);
        cal+=1;
    }
    return 0;
}
