#include <stdio.h>
int main(void)
{
    char n[1000];
    gets(n);
    char *b=n;
    char*e=n+strlen(n)-1;
    char*o=b;
    while(b<=e){
        if(*b==' '||*b=='\t')*b='\0';
        ++b;
    }
    while(e>=o){
        while(*e=='\0')--e;
        while(*e!='\0')--e;
        printf("%s ",e+1);
        --e;
    }

    return 0;
}
/*
#include <stdio.h>
int main(void)
{
    char n[10000][100000],i=0;
    do{
        scanf("%s",&n[i]);
        ++i;
    }while(getchar()!='\n');
    --i;
    while(i>0){
        printf("%s ",n[i]);--i;
    }
    printf("%s",n[i]);
    return 0;
}*/

