#include <stdio.h>
int main(void)
{
    int a,b,c,d=0,day=0;
    scanf("%d %d %d", &a,&b,&c);
    while(d<a){
        d+=b;
        ++day;
        if(d>=a) break;
        d-=c;
        if(d<=0) {--day; break;};
    }
    if(day==0)printf("-1");
    else printf("%d",day);
    return 0;
}
