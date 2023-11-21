#include <stdio.h>
int main(void)
{
    int n[10],i;
    scanf("%d %d %d %d %d %d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5],&n[6],&n[7],&n[8],&n[9]);
    sortarray(n,sizeof(n)/sizeof(n[0]));
    for(i=0;i<10;i++){
            if(i!=9) printf("%d ",n[i]);
            else printf("%d",n[i]);
            };
    return 0;
}


int sortarray(int a[],int l)
{
    int i,j;
    i = 0;
    while (i<l)
    {
        //finding the smallest number in the subarray
        int index_of_smallest = i;
        for(j=i; j<l; j++)
        {
            if (a[j]<a[index_of_smallest])
                index_of_smallest = j;
        }

        //swapping
        int temp = a[i];
        a[i] = a[index_of_smallest];
        a[index_of_smallest] = temp;

        i++;
    }
    return a;
}
