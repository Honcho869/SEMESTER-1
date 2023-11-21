#include <stdio.h>
int main(void)
{
    int n,i,j,k;
    //printf("Enter a number from 1 to 30:");
    scanf("%d",&n);
    while(n<1||n>30){
        //printf("Enter a number from 1 to 30:");
        scanf("%d",&n);
    }
    for(i=0;i<n;i++){
        for(j=n;j>i+1;j--){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("* ");
        }
        if(i<n) printf("*\n");
        else printf("*");
    }
    }
