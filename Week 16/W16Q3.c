#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int input[5][5];
    int filled[5][5];
    int points;
}BingoCard;

int main(void)
{
    int n=0;
    int answer=0;


    //Scans number of students and creates the bingo cards
    scanf("%d",&n);
    BingoCard Student[n];
    int scores[26][n];
    for(int i=0;i<26;++i){
        for(int j=0;j<n;++j)scores[i][j]=0;
    }

    //Scans the cards
    for(int k=0;k<n;++k){
        for(int i=0;i<5;++i){
            for(int j=0;j<5;++j){
                scanf("%d",&Student[k].input[i][j]);
                Student[k].filled[i][j]=0;
            }
        }
        Student[k].points=0;
    }


    //Scans the answer
    for(int x=0;x<25;++x){
        scanf("%d",&answer);
        for(int k=0;k<n;++k){
            for(int i=0;i<5;++i){
                for(int j=0;j<5;++j){
                    if(Student[k].input[i][j]==answer){
                        Student[k].filled[i][j]=1;
                        ++Student[k].points;
                    }
                }
            }
        }

    }


    //Prints the scores array
    for(int i=1;i<26;++i){
        if(scores[i][0]!=0){
            printf("%d:",i);
            for(int j=0;j<n;++j){
                printf(" %d",scores[i][j]);
            }
            printf("\n");
        }
    }
/*

    //Prints the scores array
    for(int i=1;i<26;++i){
        if(scores[i][0]!=0){
            printf("%d:",i);
            for(int j=0;j<n;++j){
                printf(" %d",scores[i][j]);
            }
            printf("\n");
        }
    }
*/


    //Puts the numbers in the scores array
    for(int x=1;x<26;++x){
        for(int k=0, position=0;k<n;++k){
            if(x==Student[k].points){
                scores[x][position]=k+1;
                //printf("x: %d and points: %d score: %d\n",x,Student[k].points,scores[x][position]);
                ++position;
            }
        }
    }

    //Prints the scores array
    for(int i=1;i<26;++i){
        if(scores[i][0]!=0){
            printf("%d:",i);
            for(int j=0;j<n;++j){
                printf(" %d",scores[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
