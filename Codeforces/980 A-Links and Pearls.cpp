#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

int main(){
    fasterIO;
    string s;

    while(cin>>s){
        int dash = 0, pearl = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='o') pearl++;
            else dash++;
        }

        if(pearl==0){
            cout<<"YES"<<endl;
            continue;
        }

        if(dash%pearl) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}

