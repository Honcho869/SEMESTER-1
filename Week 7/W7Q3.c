#include <stdio.h>
int main(void)
{
    int i=0, flag=1, j=0;
    char entry[40]={},ch;
    do{
            ch=getchar();
            entry[i]=ch;
            ++i;
    }while((ch>64&&ch<91)||(ch>96&&ch<123));
    int len=i;
    i-=2;
    int k=0;
    while(i>=len/2){
        if((entry[i]!=entry[k])&&(entry[i]-32!=entry[k])&&(entry[i]!=entry[k]-32)){
            flag=0;
           break;
        }
        ++k;
        --i;
    }
    while(j<len-1){printf("%c",entry[j]);j++;}
    if(flag==1)printf(" is a palindrome.");
    if(flag==0)printf(" is not a palindrome.");
    return 0;
}
