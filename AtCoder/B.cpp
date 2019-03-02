#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int cnt[m+1];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++){
            int nn;
            cin>>nn;
            while(nn--){
                int val;
                cin>>val;
                cnt[val]++;
            }
        }

        int ans=0;

        for(int i=0; i<=m; i++)
            if(cnt[i]==n)
                ans++;
        cout<<ans<<endl;
    }

    return 0;
}
