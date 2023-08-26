#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("text.txt","w");
    fprintf(fp,"Ashwin");
    fclose(fp);
    return 0;
}

