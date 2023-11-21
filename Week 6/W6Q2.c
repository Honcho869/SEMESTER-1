#include <stdio.h>
int main()
{
    int a,b,c,i=1,max=1;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        while(i<=a||i<=b||i<=c){
            if(a%i==0&&b%i==0&&c%i==0){
                max=i;
            }
            ++i;
        }
        printf("%d\n",max);
        i=1;
        max=1;
    }
    return 0;
}
