#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        long long v, prev, ans;
        v = prev = ans = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='o')
                prev+=v;
            else if(i && s[i-1]=='v'){
                v++;
                ans+=prev;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

