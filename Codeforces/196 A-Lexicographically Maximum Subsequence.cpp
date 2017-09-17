#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int now=0, j;
        string ans;
        for(char c='z';c>='a';c--){
            for(j=now;j<s.size();j++)
                if(s[j]==c)
                    ans+=c, now=j+1;
        }

        cout<<ans<<endl;
    }
    return 0;
}
