#include <stdio.h>
#include <string.h>
char *mystrcat(char *dest, char *src)
{
    char *p=dest;
    char *q=src;
    while(*p!='\0')++p;
    while(*q!='\0'){*p=*q;++p;++q;}
    *p='\0';
    return dest;
}

char *mystrncat(char *dest, char *src, int n)
{
    int count=0;
    char *p=dest;
    char *q=src;
    while(*p!='\0'){++p;}
    while(count<n){*p=*q;++p;++q;++count;}
    *p='\0';
    return dest;
}

int main(void)
{
    char a[6]="abc";
    char b[4]="def";
    mystrncat(a,b,3);
    puts(a);
    return 0;
}
