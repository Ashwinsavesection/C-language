#include<stdio.h>
#include<stdlib.h>
int main()
{

    //void* realloc(void *ptr,size_t new_size)

    int i;//i is for loop variable
    int a;//a is start variable
    printf("\nEnter your Arrys : ");
    scanf("%d",&a);
    int *ptr=(int *) malloc(a*sizeof(int));
    //if statement is NULL point related
    if (ptr==NULL)
    {
        printf("Memory Not Allacate");
        exit(1);
    }
    //for loop is value input of a arrays
    for(i=1;i<=a;i++)
    {
        printf("\nEnter %d Number : ",i);
        scanf("%d",ptr+i);
    }
    int b;//b is realloc check variable
    printf("\nYou Wan to extra arrays yes : 1    no : 0   :");
    scanf("%d",&b);
    if (b==1)
    {
        int c;
        printf("\nEnter extra arrys : ");
        scanf("%d",&c);
        c+=a;
        ptr=(int *) realloc(ptr,c*sizeof(int));
        for(i=a+1;i<=c;i++)
        {
            printf("\nEnter %d Number : ",i);
            scanf("%d",ptr+i);
        }
        for (i=1;i<=c;i++)
        {
            printf("\nvalue %d   :   %d",i,*(ptr+i));
        }
        exit(1);
    }
    for (i=1;i<=a;i++)
    {
        printf("\nvalue %d  :  %d",i,*(ptr+i));
    }
    return 0;
}

