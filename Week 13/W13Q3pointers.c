#include <stdio.h>

char *replace(char *source, char *pattern, char *replacement)
{
    char copy[strlen(source)+1];
    char *s=source,*c=copy,*r=replacement;

    //Copies the string
    while(*c++=*s++);c=copy;s=source;

    //Finds the pattern
    while(*s){
        for(int i=0;*(s+i)==pattern[i];++i)if(!pattern[i+1]){c+=i+1;goto exit;}
        s++;++c;
    }
    return source;

    //Replaces
    exit:
    while(*s=*r){s++;r++;};
    while(*s=*c){s++;c++;};
    return source;
}


char *replaceAll(char *source, char *pattern, char *replacement)
{
    char copy[strlen(source)+1];
    char *s=source,*c=copy,*r=replacement;

    //Copies the string
    while(*c++=*s++);c=copy;s=source;

    //Finds the pattern
    while(*s){
        for(int i=0;*(s+i)==pattern[i];++i)if(!pattern[i+1]){c+=i+1;goto exit;}
        s++;++c;
    }
    return source;

    //Replaces
    exit:
    while(*s=*r){s++;r++;};
    char *nsource=s;
    while(*s=*c){s++;c++;};
    replaceAll(nsource,pattern,replacement);
    return source;
}


int main(void)
{
    char a[200]="defddeafABCdefdefdefz";
    char b[80]="def";
    char c[60]="123";
    puts(a);
    //replace(a,b,c);
    replaceAll(a,b,c);
    puts(a);
    return 0;
}
