#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[105];
    while(scanf("%s",s)){
        int l=strlen(s);
        if(l==1 && s[0]=='0') break;
        int rem;
        for(int i=rem=0;i<l;i++){
            rem=(rem*10+(s[i]-'0'))%17;
        }
        if(rem)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
