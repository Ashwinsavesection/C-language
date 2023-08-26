#include <stdio.h>

int main()
{
    char text[100],n,e=0,o=0;
    printf("\nEnter The Limit For Input Number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter %d Number : ",i+1);
        scanf("%d",&text[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(text[i]%2==0)
            ++e;
        else
            ++o;
    }
    printf("\nTotal Even : %d",e);
    printf("\nTotal Odd : %d",o);
    return 0;
}

