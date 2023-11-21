#include <stdio.h>
int main(void)
{
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int array[rows][cols];
    for (int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            scanf("%d",&array[i][j]);
        }
    }
    print_outer(rows,cols,array,0);
    return 0;
}



void print_outer(const int rows,const int cols,const int matrix[rows][cols],int level)
{
        static int flag=0;
        int square=flag;
        for(int i=level;i<cols-1-level;++i){
            printf("%d ",matrix[level][i]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        for(int i=level;i<rows-1-level;++i){
            printf("%d ",matrix[i][cols-1-level]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        for(int i=cols-1-level;i>level;--i){
            printf("%d ",matrix[rows-1-level][i]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        for(int i=rows-1-level;i>level;--i){
            printf("%d ",matrix[i][level]);
            ++flag;
            if(flag>=rows*cols)goto done;
        }
        if(flag==square)printf("%d ",matrix[level][level]);
        else { ++level;print_outer(rows,cols,matrix,level);}
        done: return;
}
