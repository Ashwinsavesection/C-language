//total mens 41,600
//knowleged mens 14,560
//unknowleged mens 27,040
//unknowleged girls 38,400
#include<stdio.h>
int main()
{
    int total,tmens,tgirls,kmens,ukmens,ukgirls;
    printf("\nTotal population : ");
    scanf("%d",&total);
    tmens=total*0.52;
    tgirls=total*0.48;
    kmens=total*0.35;
    ukmens=tmens-kmens;
    ukgirls=tgirls;
    printf("\nTotal Population : %d",total);
    printf("\nTotal mens : %d",tmens);
    printf("\nTotal womens : %d",tgirls);
    printf("\nTotal knowledged mens : %d",kmens);
    printf("\nTotal unknowleged mens : %d",ukmens);
    printf("\nTotal unknowlegedwomens : %d",ukgirls);
    return 0 ;
}
