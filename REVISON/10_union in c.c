#include <stdio.h>

struct store
{
   double price;//8 bytes
   char *name;  //8 bytes
   char *author;//8 bytes
   char *model; //8 bytes
   char *color; //8 bytes
}o;
struct store1//total bytes 24
{
    double price;//8
    union//total 16
    {
        struct
        {
            char *name  ;//8
            char *author;//8
        }book;
        struct
        {
            char *model;//8
            char *color;//8
        }phone;
    }product;
}o2;

int main()
{
    o2.product.phone.model="Samsung galaxy j2";
    o2.product.phone.color="black and white";
    o2.price=20000;

    printf("\nWithout union in structure :  %d",sizeof(o));
    printf("\nunion in structure:  %d\n",sizeof(o2));

    return 0;
}

