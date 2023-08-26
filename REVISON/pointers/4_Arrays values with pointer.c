#include<stdio.h>

int main()
{
    int a[]={10,20,30,40,50};//assign value in arrays
    int *p;//declare pointer variable
    p=&a;
    for(int i=0;i<5;i++)//i 5 times run
    {

        printf("\nA[%d] : %d ",i+1,*p++);//dereferencing pointer variable and increment
    }
    return 0;
}
