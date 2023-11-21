#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char palabra[100];
    scanf("%s",&palabra);
    reverse(palabra);
    return 0;
}

void reverse(char *word)
{
    static int i=1;
    char *p=word+strlen(word)-i;
    printf("%.1s",p);
    ++i;
    while(i<=strlen(word)){
        reverse(word);
    }
}
