#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Example for wild error

    int *p;
    *p =100;
    */


    //solution 1:
    //1.Assign the address of correct variables
    /*
    int a=10;
    int *p;
    *p =&a;

    */

    //solution 2:
    //1.dynamicaly allocate memory and add values to it
    /*
    int *p=(int *)malloc (sizeof(int));
    *p =50;

    */
    return 0;
}

