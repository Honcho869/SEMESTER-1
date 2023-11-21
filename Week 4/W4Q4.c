#include <stdio.h>
int main(void)
{
    int i,score,rs,A,B;
    i=1;
    score=0;
    //printf("Rock, Paper, Scissors, enter your selections\n");
    while(i<=5){
        //printf("Round %d:",i);
        A=getchar();
        B=getchar();
        getchar();
        rs=A-B;
        switch(rs){
            case 0: i++;
                    break;
            case -1: case -2: case 3: ++i;
                    ++score;
                    break;
            case 2: case -3: case 1: ++i;
                    --score;
                    break;
        }
    }
    if(score==0) printf("Draw");
    else if(score>0) printf("Alice");
    else printf("Bob");
}
