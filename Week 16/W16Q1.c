#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkfor5(const char array[19][20],const int x,const int y){
    int leftdiag=0, vertical=0, rightdiag=0, horizontal=0;
    while(array[x][y]==array[x-leftdiag][y+leftdiag]&&leftdiag<5)++leftdiag;
    while(array[x][y]==array[x+vertical][y]&&vertical<5)++vertical;
    while(array[x][y]==array[x+rightdiag][y+rightdiag]&&rightdiag<5)++rightdiag;
    while(array[x][y]==array[x][y+horizontal]&&horizontal<5)++horizontal;
    if(horizontal==5||vertical==5||leftdiag==5||rightdiag==5){
        if(array[x][y]=='X'){printf("Black");return 1;}
        else if(array[x][y]=='O') {printf("White");return 1;}
    }
    return 0;
}



int main(void)
{
    int winner=0;
    char Gomoku[19][20];
    for(int i=0;i<19;++i){
        gets(Gomoku[i]);
    }


    for(int i=0;i<19;++i){
        for(int j=0;j<19;++j){
            if(Gomoku[i][j]=='X'||Gomoku[i][j]=='O'){
                winner=checkfor5(Gomoku,i,j);
                if(winner==1)return 0;
            }
        }
    }
    printf("No winner");
    return 0;
}
