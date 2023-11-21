#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    //printf("Enter 4 integer representing 2 segments:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a<b&&c<d&&c<b)||(b<a&&c<d&&c<a)||(b<a&&d<c&&d<a)||(a<b&&d<c&&d<b)){
        printf("overlay");
    }
    else{
        printf("no overlay");
    }
    return 0;
}
