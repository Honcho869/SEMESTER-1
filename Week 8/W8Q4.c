#include <stdio.h>
int main(void)
{
    int CR, SR,failed=0,students=0;
    scanf("%d %d",&CR,&SR);
    float courses[CR][3],scores[SR][2];
    for(int i=0;i<CR;++i){
        scanf("%f %f %f",&courses[i][0],&courses[i][1],&courses[i][2]);
    }
    for(int i=0;i<SR;++i){
        scanf("%f %f",&scores[i][0],&scores[i][1]);
    }
    float grades[CR][6];
    for(int i=0;i<CR;++i){
            grades[i][0]=courses[i][0];
            grades[i][1]=courses[i][1];
            grades[i][2]=0;
            for(int j=0;j<SR;++j){
                if(scores[j][0]==grades[i][0]){
                        grades[i][2]+=scores[j][1];
                        //printf("%f %f\n",grades[i][1],scores[i][1]);
                        grades[i][3]+=1;
                        }
            }
    }
    for(int i=0;i<CR;++i){
        grades[i][4]=grades[i][2]/grades[i][3];
        grades[i][5]=100;
    }

    int temp;
    for(int i=0;i<CR;++i){
        for(int j=0;j<=i;++j){
            if(j==i/*&&grades[i][3]>0*/)++students;
            if(grades[i][1]==grades[j][1]){
                    if(grades[j][4]<grades[i][5]/*&&grades[j][3]>0*/){grades[i][5]=grades[i][4];grades[i][4]=100;}
                    break;
            }
        }
    }
    for(int i=0;i<CR;++i){
        printf("%6.2f %6.2f %6.2f %6.2f %6.2f %6.2f\n",grades[i][0],grades[i][1],grades[i][2],grades[i][3],grades[i][4],grades[i][5]);
    }
    for(int i=0;i<CR;++i){
        if(grades[i][5]<60)++failed;
    }
    printf("%d %d",students,failed);
    return 0;
}
