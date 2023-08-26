#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("samble.txt","a");
    fprintf(fp,"ashwin kumar\n");
    fclose(fp);

    return 0;
}
