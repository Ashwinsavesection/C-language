#include<stdio.h>

int main()
{
    int a=35;
    printf("\nAnd Opereter : %d",a>=35 && a<=100);//and operater consume True only
    printf("\nor Opereter : %d",a>=35 || a<=100);//or operater consume least 1 true is true
    printf("\nnot Opereter : %d",!a>=35);//not operater is reverse operater
    return 0 ;
}
