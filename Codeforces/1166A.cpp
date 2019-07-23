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
        int cnt[26] = {};

        for(int i=0; i<n; i++){
            cin>>s;
            cnt[s[0]-'a']++;
        }

        int ans = 0;

        for(int i=0; i<26; i++){
            int x, y;
            x = cnt[i]>>1;
            y=x;

            x+=cnt[i]&1;

            ans+=(x*(x-1))/2 + (y*(y-1))/2;
        }

        cout<<ans<<endl;
    }

    return 0;
}

