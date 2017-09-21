#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[1000];
    int i=0,c=0,sum,j,k;
    deque<char>plus(1000,'0');
    while(gets(s)){
        if(strlen(s)==1 && s[0]=='0') break;
        int l=strlen(s);
        c=0;
        for(k=l-1,j=999;k>-1;k--,j--){
            sum=c+(s[k]-'0')+(plus[j]-'0');
            plus[j]=(sum%10)+'0';
            c=sum/10;
        }
        for(;;j--){
            sum=c+(plus[j]-'0');
            plus[j]=(sum%10)+'0';
            c=sum/10;
            if(!c) break;
        }
    }
    for(i=0;i<1000;i++){
        if(plus[i]!='0')
            break;
    }
    for(;i<1000;i++)
        printf("%c",plus[i]);
    printf("\n");
    return 0;
}
