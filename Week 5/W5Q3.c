#include <stdio.h>
int isprime(int n)
{
    int i;
    if(n==1)return 0;
    for(i=2; i<=n/2;++i){if(n%i==0)return 0;}
    return 1;
}

int main() {
    int n, flag = 0;
    while(scanf("%d", &n)!=EOF){
        flag=isprime(n);
        if (n==0)break;
        else if(flag==0)printf("not a prime\n");
        else printf("prime\n");
    }
}
