#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[105];
    while(scanf("%s",s)){
        int l=strlen(s);
        if(l==1 && s[0]=='0') break;
        int rem=0;
        for(int i=0;i<l;i++){
            rem=(rem*10+(s[i]-'0')) % 17;
        }
            printf("%d\n",rem);
    }
    return 0;
}
