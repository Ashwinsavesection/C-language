#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nEnter 1 mark : ");
    scanf("%d",&m1);
    printf("\nEnter 2 mark : ");
    scanf("%d",&m2);
    printf("\nEnter 3 mark : ");
    scanf("%d",&m3);
    printf("\nEnter 4 mark : ");
    scanf("%d",&m4);
    printf("\nEnter 5 mark : ");
    scanf("%d",&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    printf("\nTotal   : %d",total);
    printf("\nAverege : %f",avg);
    if (m1>=35&&m5>=35&&m4>=35&&m3>=35&&m2>=35)
    {
        printf("\nResult : pass");
        if (avg>=90&&avg<=100)
        {
            printf("\nGrade  : A");
        }
        else if (avg>=80&&avg<=89)
        {
            printf("\nGrade  : B");
        }
        else if (avg>=70&&avg<=79)
        {
            printf("\nGrade  : C");
        }

        else
        {
            printf("\nGrade  : D");
        }
    }
    else
    {
        printf("\nResult : fail");
        printf("\nGrade  : No Grade");

    }
    return 0 ;
}
