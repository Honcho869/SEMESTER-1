#include <stdio.h>
int main(void)
{
    char l,u;
    /*printf("Type an uppercase character:");*/
    scanf("%c",&u);
    if(u>='A'&&u<='Z'){
        l=('a'-'A'+u);
    }
    else{
        l=u;
    }
    printf("%c",l);
    return 0;
}
