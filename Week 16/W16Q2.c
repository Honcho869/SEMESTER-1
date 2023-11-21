#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int answer[4];
    int guess[4];
    int bulls=0,cows=0;

    //Scans both the answer and the guess
    for(int i=0;i<4;++i)scanf("%1d",&answer[i]);
    for(int i=0;i<4;++i)scanf("%1d",&guess[i]);

    //Sees if the numbers are equal
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
                if(answer[i]==guess[j]&&i==j)++bulls;
                else if(answer[i]==guess[j])++cows;
        }
    }

    //Prints the answer
    printf("%d %d",bulls,cows);


    return 0;
}
