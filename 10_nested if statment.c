int main()
{
    int year;
    printf("\nEnter the year : ");
    scanf("%d",&year);
    if (year%100==0)
    {
        if (year%400==0)
        {
            printf("\nis leap year %d",year);
        }
        else
        {
            printf("\nis not leap year %d",year);

        }

    }
    else
    {
        if (year%4==0)
        {
            printf("\nis leap year %d",year);
        }
        else
        {
            printf("\nis not leap year %d",year);

        }
    }
    return 0 ;
}
