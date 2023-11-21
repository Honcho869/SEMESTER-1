#include <stdio.h>
int main()
{
    int i,x,max,min;
    char c=32;
    while(c==32)
    {
        scanf("%d",&x);
        if(i==0){max=x;min=x;++i;}
        else{
            if(max<x)max=x;
            if(min>x)min=x;
            }
        c=getchar();
    }
    printf("%d %d",max,min);
}
