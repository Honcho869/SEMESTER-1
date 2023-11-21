#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //How many words?
    int n;
    scanf("%d", &n);

    char word[n][50];
    char rule[4][50]={"javascript","java","cook","book"};

    //Enters the words into the arrays
    for(int i=0;i<n;++i){
        scanf("%s",&word[i]);
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<n;++j){
            if(!strcmp(word[j],rule[i])){
                memmove(word[1],word[0],50*j);
                memcpy(word[0],rule[i],50);
            }
        }
    }


    printf("\nResult:\n");
    for(int i=0;i<n;++i){
        printf("%s\n",word[i]);
    }


    return 0;
}
