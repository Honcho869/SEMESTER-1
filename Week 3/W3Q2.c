#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    //printf("Enter a 4 digit number:");
    scanf("%1d%1d%1d%1d", &a,&b,&c,&d);
    while(a==0){
        //printf("Enter a 4 digit number:");
        scanf("%1d%1d%1d%1d", &a,&b,&c,&d);
    }
    printf("%d%d%d%d",d,c,b,a);
    return 0;
}
