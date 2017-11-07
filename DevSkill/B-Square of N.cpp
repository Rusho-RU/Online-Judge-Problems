#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(cin>>s){
        string ans;
        for(int i=1; i<s.size(); i++)
            ans+='9';
        ans+='8';
        for(int i=1; i<s.size(); i++)
            ans+='0';
        ans+='1';
        cout<<ans<<endl;
    }

    return 0;
}
