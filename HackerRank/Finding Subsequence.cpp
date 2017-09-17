#include <bits/stdc++.h>
using namespace std;

#define MAX (int)1e5

string s;
int k;

int main(){
    while(cin>>s>>k){
        int now=0;
        string ans;

        for(char c='z';c>='a';c--){
            for(int j=now;j<s.size();j++){
                if(s[j]==c)
                    ans+=s[j];
            }
        }

        cout<<ans;
    }
    return 0;
}
