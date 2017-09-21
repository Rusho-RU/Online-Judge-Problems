#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ara[32];
    ara[0]=1;
    for(int i=1;i<32;i++){
        ara[i]=ara[i-1]*2;
    }
    char s[50];
    while(gets(s),s[0]!='0'){
        long long sum=0;
        int l=strlen(s);
        for(int i=l-1,j=1;i>-1;i--,j++){
            if(s[i]!=0)
                sum+=(s[i]-'0')*(ara[j]-1);
        }
        printf("%d\n",sum);
    }
    return 0;
}
