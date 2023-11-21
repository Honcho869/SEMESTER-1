#include <stdio.h>
int main(void)
{
    int a,b,v, n[200],i_tie,winner;
    while(1){
    winner=0;
    i_tie=0;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)break;
    int n[200]={};
    for(int i=0;i<b;++i){
        scanf("%d",&v);
        ++n[v-1];
    }
    for(int i=0;i<a;++i){
        if(i==0)winner=0;
        if(n[i]==n[winner])i_tie=winner;
        if(n[i]>=n[winner])winner=i;
    }
    if(n[winner]==n[i_tie]&&i_tie!=winner)printf("No winner\n");
    else if(n[winner]>b/2)printf("Majoritarian winner %d\n",winner+1);
    else printf("Plurality winner %d\n",winner+1);
    }
    return 0;
}
