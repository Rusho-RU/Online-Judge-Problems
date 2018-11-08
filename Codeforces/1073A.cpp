#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int n;
    string s;

    while(cin>>n>>s){
        int i;

        for(i=1; i<n; i++){
            if(s[i]!=s[i-1]){
                break;
            }
        }

        if(i==n)
            cout<<"NO"<<endl;

        else
            cout<<"YES\n"<<s[i-1]<<s[i]<<endl;
    }

    return 0;
}
