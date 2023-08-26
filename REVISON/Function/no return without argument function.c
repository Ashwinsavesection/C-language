//No Return Without Argument Function
#include<stdio.h>

void Examble();//Function declaration

int main(){

    Examble();//Function calling

    return 0;
}

void Examble(){//Function defination

    int a,b;
    printf("\nEnter a value : ");
    scanf("%d",&a);
    printf("\nEnter b value : ");
    scanf("%d",&b);
    printf("\nTotal : %d \n",a+b);
}

