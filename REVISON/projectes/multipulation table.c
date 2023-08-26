#include <stdio.h>

int main()
{
    int ntable,ltable;
    printf("\nEnter Table : ");
    scanf("%d",&ntable);
    printf("\nEnter Table limit : ");
    scanf("%d",&ltable);
    for(int i=0;i<ltable;i++)
    {
        printf("\n%d X %d = %d",(i+1),ntable,ntable*(i+1));
    }
    return 0;
}


