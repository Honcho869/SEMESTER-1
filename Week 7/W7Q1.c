#include <stdio.h>
#include <stdlib.h>

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



int main(void)
{
    int N=10,x,j,i=-1,a[80]={};
    float sum=0,avg;
    while((scanf("%d",&x)!=EOF)&&(i!=N-1)){
            if(i==-1){N=x;int a[N];}
            else a[i]=x;
            ++i;
    }
    sortarray(a,sizeof(a)/sizeof(a[0]));
    for(j=77;j>83-N;--j)sum+=a[j];
    avg=sum/(N-6);
    printf("%.2f",avg);
}

