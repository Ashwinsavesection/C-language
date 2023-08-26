#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("text.txt","a");
    fprintf(fp,"welcome to our computer");
    fclose(fp);
    return 0;
}

