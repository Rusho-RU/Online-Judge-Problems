#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        stack<char>stck;
        int cnt=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='<')
                stck.push('<');

            else if(s[i]=='>' && !stck.empty())
                cnt++, stck.pop();
        }

        printf("%d\n",cnt);
    }
    return 0;
}
