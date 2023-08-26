#include<stdio.h>

int main()
{
    int a=24,b=56;
    printf("\nBitwise And : %d",a&b);
    printf("\nBitwise or : %d",a|b);
    printf("\nBitwise xor : %d",a^b);
    printf("\nBitwise not : %d",~a);
    printf("\nBitwise Right shift : %d",a<<2);
    printf("\nBitwise left shift : %d",a>>2);

    return  0;
}
