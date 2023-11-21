#include <stdio.h>
int main(void)
{
    int n,i;
    float a,b,c;
    n=-1;
    while(n<0){
        //printf("Enter a positive integer:");
        scanf("%d",&n);
    }
    a=0;
    c=0;
    i=0;
    b=n;
    while(i<=50){
        c=(a+b)/2;
        if(c*c>=n){
                b=c;
        }
        else{
                a=c;
        }
        i++;
    }
    printf("%.4f",c);
}
