#include<stdio.h>
#define LIMIT 5
#define MSG "ASHIWN KUMAR"

#define custom_message(a)\
printf("\n" #a " welcome to our home")


int main()
{
    for(int i=0;i<LIMIT;i++)
    {
        printf("\n%d",i);
    }

    printf("\n%s",MSG);
    custom_message(ashwin kuma );
    printf("\nFile name  : %s",__FILE__);
    printf("\nTime       : %s",__TIME__);
    return 0;
}
