#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n){
        string s;
        cin>>s;

        if(s=="0"){
            cout<<"0"<<endl;
            continue;
        }

        int zeroes = 0;

        for(int i=0; i<s.size(); i++)
            if(s[i]=='0') zeroes++;

        cout<<"1";

        for(int i=0; i<zeroes; i++)
            cout<<"0";
        cout<<endl;
    }

    return 0;
}
