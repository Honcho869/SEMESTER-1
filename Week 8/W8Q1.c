#include <stdio.h>
void sortarrays(int a[],int b[],int c[],int l)
{
    int i,j;
    i = 0;
    for (i = 1; i < l; i++) {
        for (j = 1; j < l; j++) {
            if (a[j] < a[j-1] || (a[j] == a[j-1] && b[j] < b[j-1])) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
                temp = c[j];
                c[j] = c[j-1];
                c[j-1] = temp;
            }
        }
    }
}

int main(void)
{
    int x,y,k,i=0,j=0;
    scanf("%d %d %d",&x,&y,&k);
    int n[k];
    int m[k];
    int o[k];
    for(int h=0;h<k;++h){
        scanf("%d %d %d",&n[h],&m[h],&o[h]);
    }
    sortarrays(n,m,o,k);
    int u=0;
    while(i<x){
            while(j<y){
                if(u < k && i==n[u]&&j==m[u]){
                    while (u+1 < k && n[u] == n[u+1] && m[u] == m[u+1]) u++;
                    printf("%d ",o[u]);u++;
                }
                else printf("0 ");
                ++j;
                if(j==y){printf("\n");j=0;++i;break;}
            }
    }
    return 0;
}
