#include<stdio.h>

struct store
{
    double price;
    char *name;
    char *author;
    char *model;
    char *color;
}o;
struct store2
{
    double price;
    union {
        struct{
            char *name;
            char *author;
        }book;
        struct{
            char *model;
            char *color;
        }phone;
    }product;
}o2;
int main()
{
    o.model="POCO C31";
    o.color="Blue";
    o.price=8500.00;
    o2.product.phone.model="POCO C31";
    o2.product.phone.color="Blue";
    o2.price=8500.00;

    return 0 ;
}
