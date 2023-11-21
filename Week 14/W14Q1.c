#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace(char *source, char const *pattern, char const *replacement)
{
    //Declarations of variables
    int lenp;
    char *substring;
    static int lenr;
    static char *last_source;
    static char *p;

    //Checks if source exists
    if(source){
            substring=source;
            last_source=source;
            }
    else {
            source=last_source;
            substring=p+lenr;
    }

    //Asigns values
    lenp=strlen(pattern);
    lenr=strlen(replacement);

    //Goes to the location of pattern or stops if not found
    p=strstr(substring,pattern);
    if(p==NULL)return source;

    //Moves the last part of the string to fit the replacement
    memmove(p+lenr,p+lenp,strlen(p)-lenp+1);

    //Puts the replacement in the space reserved for it
    memcpy(p,replacement,lenr);
    return source;
}



int main(void)
{
    /*char a[200]="1223456789";
    char b[80]="2";
    char c[60]="123";
    puts(a);
    replace(a,b,c);
    puts(a);
    replace(a,b,c);
    puts(a);
    replace(NULL,b,c);
    puts(a);
    printf("1112331233456789");*/
    char source[100] = "1223456789", pattern[10] = "2", replacement[10] = "123";
    printf("%s\n", replace(source, pattern, replacement)); //Here should print out 112323456789

    printf("%s\n", replace(source, pattern, replacement)); //Here should print out 11123323456789

    printf("%s\n", replace(NULL, pattern, replacement)); //Here should print out 1112331233456789
    printf("1112331233456789");
    return 0;
}
