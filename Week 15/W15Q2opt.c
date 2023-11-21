#include <stdio.h>

int sum(const char array[],const int len)
{
    static int answer=0;
    static int i=0;
    if(i==len)return answer;
    if(array[i]=='G'||array[i]==','||array[i]=='('||array[i]==')'){++i;sum(array,len);}
    else if(array[i]=='F'){++answer;++i;sum(array,len);}
    else{
        int temp=0;
        while(array[i]>='0'&&array[i]<='9')
        {
            temp=temp*10+array[i]-'0';
            ++i;
        }
        answer+=temp;
        sum(array,len);
    }
    return answer;
}


int main(void)
{
    char result[10000];
    gets(result);
    int len=strlen(result);
    printf("%d",sum(result,len));
    return 0;
}
