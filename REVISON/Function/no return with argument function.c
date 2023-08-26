//No Return With Argument Function
#include<stdio.h>

void Examble(int,int);//Function declaration

int main(){

    //Function calling
    Examble(20,35);//Actual parameter

    return 0;
}

void Examble(a,b){//Formal parameter
    //Function definition
    printf("\nTotal : %d \n",a+b);
}


