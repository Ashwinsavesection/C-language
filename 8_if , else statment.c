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

    else
    {
        printf("\n%s age is %d,not eligebale for vote",name,age);
    }
    return 0;
}

