/*
Arthemetic Operaters

+ addition
- supraction
* multipulation
/ divison
% modles
*/

#include<stdio.h>

int main()
{
    int a,b,c;
    float d;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Addition : %d",c);
    c=a-b;
    printf("\n suptraction : %d",c);
    c=a*b;
    printf("\n multipulation : %d",c);
    d=a/b;
    printf("\n divison : %0.2f",d);
    c=a%b;
    printf("\n modles : %d",c);
    return 0;
}
