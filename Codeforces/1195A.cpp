#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int cnt[k];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            val--;
            cnt[val]++;
        }

        sort(cnt, cnt+k, greater<int>());

        int ans = 0, box = n/2 + n%2;

        for(int i=0; i<k; i++){
            int jabe = min(cnt[i]/2 + cnt[i]%2, box);
            box-=jabe;
            ans+=min(cnt[i], jabe*2);
        }

        cout<<ans<<endl;
    }

    return 0;
}
