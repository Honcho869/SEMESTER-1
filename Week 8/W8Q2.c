#include <stdio.h>
int main(void)
{
    //Declares and scans the maze
    int n;
    scanf("%d",&n);
    int maze[n+2][n+2];
    for(int fill=0;fill<n+2;++fill)
    {
        for(int fill1=0;fill1<n+2;++fill1)
        {
            maze[fill][fill1]=1;
        }
    }
    for(int fill=1;fill<n+1;++fill)
    {
        for(int fill1=1;fill1<n+1;++fill1)
        {
            scanf("%d",&maze[fill][fill1]);
        }
    }
    int queue[n*n][2];
    int k=-1,i,j;
    if(maze[1][1]==0){queue[0][0]=1;queue[0][1]=1;++k;maze[1][1]=1;}
    else{printf("No");return 0;}
    while(k>=0){
        i=queue[k][0];j=queue[k][1];
        //printf("%d %d\n",i,j);
        --k;
        if(i==n&&j==n){printf("Yes");return 0;}
        if(maze[i-1][j]!=1){++k; queue[k][0]=i-1;queue[k][1]=j;maze[i-1][j]=1;}
        if(maze[i+1][j]!=1){++k; queue[k][0]=i+1;queue[k][1]=j;maze[i+1][j]=1;}
        if(maze[i][j-1]!=1){++k; queue[k][0]=i;queue[k][1]=j-1;maze[i][j-1]=1;}
        if(maze[i][j+1]!=1){++k; queue[k][0]=i;queue[k][1]=j+1;maze[i][j+1]=1;}
    }


    printf("No");
    return 0;
}
