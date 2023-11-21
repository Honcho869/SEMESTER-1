#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace(char *source, char *pattern, char *replacement)
{
   char *p=strstr(source,pattern);
   if(p==NULL)return source;
   memmove(p+strlen(replacement),
           p+strlen(pattern),
           strlen(p)-strlen(pattern)+1);
   memcpy(p,
          replacement,
          strlen(replacement));
   return source;
}

char *replaceAll(char *source, char *pattern, char *replacement)
{
   char *p=strstr(source,pattern);
   if(p==NULL)return source;
   memmove(p+strlen(replacement),
           p+strlen(pattern),
           strlen(p)-strlen(pattern)+1);
   memcpy(p,
          replacement,
          strlen(replacement));
          char *nsource=p+strlen(replacement+1);
          replaceAll(nsource, pattern, replacement);
   return source;
}

int main(void)
{
    char a[200]="defddeafABCdefdefdefz";
    char b[80]="def";
    char c[60]="12345";
    puts(a);
    replace(a,b,c);
    puts(a);
    return 0;
}
