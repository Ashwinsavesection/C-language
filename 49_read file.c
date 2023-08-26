#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("samble.txt","r");
    if (fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
        {
            break;
        }
        printf("%c",c);

    }
    return 0;
}
