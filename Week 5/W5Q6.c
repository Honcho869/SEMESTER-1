#include <stdio.h>
int digits(int b){
    int i=0;
    if (b==0)++i;
    else while(b>0){
        b=b/10;
        ++i;
    }
    return i;
}
int main(void)
{
    int n,i,j,x;
    n=-1;
    while(n<0){
        //printf("Enter a positive integer or 0:");
        scanf("%d",&n);
    }
    //Counts the digits
    i=digits(n);
    //Prints the morse code
    while(i>0){
        x=n;
        for(j=i-1;j>0;j--){x=x/(10);}
        if(digits(x)!=1){x=x%(10);}
        switch(x){
            case 0: printf("-----");
                    break;
            case 1: printf(".----");
                    break;
            case 2: printf("..---");
                    break;
            case 3: printf("...--");
                    break;
            case 4: printf("....-");
                    break;
            case 5: printf(".....");
                    break;
            case 6: printf("-....");
                    break;
            case 7: printf("--...");
                    break;
            case 8: printf("---..");
                    break;
            case 9: printf("----.");
                    break;
        }
        --i;
        if(i!=0) printf(" ");
    }
    return 0;
}
