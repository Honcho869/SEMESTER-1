#include <stdio.h>
int main(void)
{
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    for (int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            scanf("%d",&matrix[i][j]);
        }
    }
    int i5=0;
    int circle,i1,i2,i3,i4,square;
    for(circle=0;1;++circle){
        square=i5;
        for(i1=circle;i1<cols-1-circle;++i1){
            printf("%d ",matrix[circle][i1]);
            ++i5;
            if(i5>=rows*cols)goto done;
        }
        for(i2=circle;i2<rows-1-circle;++i2){
            printf("%d ",matrix[i2][cols-1-circle]);
            ++i5;
            if(i5>=rows*cols)goto done;
        }
        for(i3=cols-1-circle;i3>circle;--i3){
            printf("%d ",matrix[rows-1-circle][i3]);
            ++i5;
            if(i5>=rows*cols)goto done;
        }
        for(i4=rows-1-circle;i4>circle;--i4){
            printf("%d ",matrix[i4][circle]);
            ++i5;
            if(i5>=rows*cols)goto done;
        }
        if(square==i5){printf("%d ",matrix[circle][circle]);goto done;}
    }
    done: return 0;
}
