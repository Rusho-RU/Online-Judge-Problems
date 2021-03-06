#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int l, r, cnt[n+2];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<m; i++){
            cin>>l>>r;
            cnt[l]++;
            cnt[r+1]--;
        }

        for(int i=1; i<=n; i++){
            cnt[i]+=cnt[i-1];
        }

        int ans=0;

        for(int i=0; i<=n; i++){
            if(cnt[i]==m)
                ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}

