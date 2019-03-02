#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        long long b = 0;
        long long ans = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='B')
                b++;
            else{
                ans+=b;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

