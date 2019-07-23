#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int isSquare(int n){
    int sq = sqrt(n);

    if(sq*sq==n)
        return sq;
    return -1;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        map<int, int>mp;

        mp[0] = 1;

        int z=0, o=0, ans=0;

        for(int i=0; i<s.size(); i++){
            s[i]=='0' ? z++ : o++;

            int sq = isSquare(z);

            if(sq==-1)
                continue;

            int diff = sq-o;

            ans+=mp[diff];

            mp[diff]++;
        }

        cout<<ans<<endl;
    }

    return 0;
}

