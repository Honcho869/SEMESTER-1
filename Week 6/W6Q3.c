#include <stdio.h>
int main(void)
{
    int n,counter=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;++i)if(isprime(i) && isprime(n-i))++counter;
    printf("%d", counter);
}
int isprime(int n)
{
    if(n==1)return 0;
    for(int i=2; i<=n/2;++i)if(n%i==0)return 0;
    return 1;
}
