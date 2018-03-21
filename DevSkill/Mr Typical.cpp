#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map<string, bool>mp;

    mp["never"] = true;
    mp["you"] = true;
    mp["happy"] = true;
    mp["and"] = true;
    mp["be"] = true;
    mp["so"] = true;
    mp["sad"] = true;
    mp["when"] = true;
    mp["are"] = true;

    while(cin>>s){
        if(mp[s])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
