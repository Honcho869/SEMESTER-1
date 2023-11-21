#include <stdio.h>
int main(void)
{
    int x;
    //printf("Enter an integer:");
    scanf("%d",&x);
    if(x%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}
