#include<stdio.h>
#include<string.h>

int main()
{
    char c[20],a[20];
    char x[10]={'a','s','h','\0'};
    char y[10]={'w','i','n','\0'};
    printf("x : %s",x);
    printf("\nEnter The String : ");
    gets(c);
    printf("\nCompare         : %d",strcmp(x,c));//string compare
    printf("\nLenth           : %d",strlen(c));//string lenth
    printf("\nReverse         : %s",strrev(c));//string reverse
    printf("\nUpper case      : %s",strupr(c));//string Upper
    printf("\nLower case      : %s",strlwr(c));//string Lower
    printf("\nCopy            : %s",strcpy(a,c));//string Copy
    strcat(x,y);
    printf("\nConcatenation   : %s",x);//string Copy

    return 0;
}

/*
char c[40];
    printf("\nEnter The String : ");
    gets(c);
    printf("%s",c);

*/
