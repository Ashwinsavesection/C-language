#include<stdio.h>

int main()
{
    int i=0,lim;
    printf("\n-----------------------------");
    printf("\n          while ");
    printf("\n-----------------------------");
    while(i<=10){
        if(i%2==0)
            printf("\n%d",i);
        i++;
    }
    i=0;
    printf("\n-----------------------------");
    printf("\n          do while ");
    printf("\n-----------------------------");
    do{
        printf("\n%d",i);
        i++;
    }while(i<=10);
    return 0;
}
