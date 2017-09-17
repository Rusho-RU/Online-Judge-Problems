#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    while(scanf("%c",&c)==1){
        string s;
        int count=0;
        s+=c;
        while(scanf("%c",&c) && c!='\n'){
            if(c=='K' && s[s.size()-1]=='V'){
                count++;
                s[s.size()-1]='#';
            }

            else
                s+=c;
        }

        for(int i=1;i<s.size();i++){
            if(s[i]!='#' && s[i-1]!='#' && s[i]==s[i-1]){
                count++;
                break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
