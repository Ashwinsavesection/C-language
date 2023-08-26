int main()
{
    char name[10];
    int age,c;
    printf("\nEnter your name : ");
    scanf("%s",name);
    printf("\nEnter age : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n%s age %d ,eligibale for vote",name,age);
    }
    else if (age<=17)
    {
        c=18-age;
        printf("\n%s age %d , not eligibale for vote,wait %d years",name,age,c);
    }
    else
    {
        printf("\n%s age is %d,not eligebale for vote",name,age);
    }
    return 0;
}


