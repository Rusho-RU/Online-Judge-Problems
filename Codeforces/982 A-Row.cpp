#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

bool isPossible(const string& s){
    if(s.size()==1)
        return true;

    for(int i=1; i<s.size(); i++){
        if(s[i]=='1' && s[i-1]=='1')
            return false;
    }

    if(s[0]=='0' && s[1]=='0')
        return false;

    if(s[s.size()-1]=='0' && s[s.size()-2]=='0')
        return false;

    for(int i=0; i<s.size()-2; i++){
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0')
            return false;
    }

    return true;
}

int main(){
    fasterIO;

    int n;

    while(cin>>n){
        string s;
        cin>>s;

        if(n==1 && s=="0"){
            cout<<"No"<<endl;
            continue;
        }

        if(isPossible(s))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }


    return 0;
}
