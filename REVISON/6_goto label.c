#include<stdio.h>

int main()
{
    int i=1;
    hi:
    printf("\n%d",i);
    i++;
    if(i==5){printf("\nEnd");}
    else{goto hi;}
    return 0;
}
