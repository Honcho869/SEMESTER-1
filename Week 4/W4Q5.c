#include <stdio.h>
int main(void)
{
    int a,b,c,C,T;
    /*printf("Enter 3 numbers:");*/
    scanf("%d %d %d",&a,&b,&c);
    C=c*c;
    T=a * a + b * b;
    if(a + b <= c){
        printf("can not construct");
    }
    else{
        if(T<C)printf("obtuse triangle");
        else if(T==C)printf("right triangle");
        else printf("acute triangle");
        }
}
