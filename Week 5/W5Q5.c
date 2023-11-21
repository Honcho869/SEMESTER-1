#include <stdio.h>
int main(void)
{
    int n,i,j,facts;
    while(n!=0){
    i=2;
    facts=1;
    j=1;
    /*printf("Enter a positive integer:");*/
    scanf("%d",&n);
    while(n<0){
        /*printf("Enter a positive integer:");*/
        scanf("%d",&n);
    }

    if(n==1) printf("1 = 1");
    else if(n==0){}
    else{
        printf("%d = ",n);
        while(facts<n){
            while(n%i==0){
                if(j==1){
                    printf("%d",i);
                    j++;
                }
                else printf(" * %d",i);
                n/=i;
                facts=i;
            }
            ++i;
        }
    }
    printf("\n");
    }
}
