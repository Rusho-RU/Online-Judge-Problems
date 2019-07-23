#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s;
        cin>>s;

        for(int i=1; i<s.size(); i+=2){
            while(i<s.size() && s[i]==s[i-1])
                s.erase(s.begin()+i);
        }

        if(s.size()&1)
            s.pop_back();

        cout<<n-s.size()<<endl;
        cout<<s<<endl;
    }

    return 0;
}

