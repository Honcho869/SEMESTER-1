#include <stdio.h>
int main(void)
{
    int i, a;
    i=0;
    /*printf("Enter a positive integer:");*/
    scanf("%d",&a);
    while(a<0){
        /*printf("Enter a positive integer:");*/
        scanf("%d",&a);
    }
    while(i<=a){
        i=i+2;
    }
    i=i-2;
    printf("%d",i);
    return 0;
}
