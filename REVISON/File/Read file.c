 #include <stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("text.txt","r");
    while(1)
    {
      c=fgetc(fp);
      if(c==EOF)
        break;
    printf("%c",c);
    }
    return 0;
}
