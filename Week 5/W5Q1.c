#include <stdio.h>
int main(void)
{
    int a,sum;
    sum=0;
    while(a!=0){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
