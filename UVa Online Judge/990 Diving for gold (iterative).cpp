#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t, w, g;

    bool first = true;

    while(cin>>t>>w>>g){
        if(!first)
            cout<<"\n";
        else
            first&=0;

        int cost[g+1], gold[g+1], depth[g+1];

        for(int i=1; i<=g; i++){
            int d;
            cin>>depth[i]>>gold[i];
            cost[i] = 3*w*depth[i];
        }

        int dp[g+1][t+1];

        for(int i=0; i<=g; i++) dp[i][0] = 0;
        for(int i=0; i<=t; i++) dp[0][i] = 0;

        for(int i=1; i<=g; i++){
            for(int j=1; j<=t; j++){
                dp[i][j] = cost[i]<=j ? max(dp[i-1][j], dp[i-1][j-cost[i]]+gold[i]) : dp[i-1][j];
            }
        }

        int mx = dp[g][t];

        cout<<mx<<"\n";

        vector<pair<int, int> >ans;

        for(int i=g, j=t; i>0 && j>=0; i--){
            if(dp[i][j]!=dp[i-1][j]){
                ans.push_back({depth[i], gold[i]});
                j-=cost[i];
            }
        }

        reverse(all(ans));

        cout<<ans.size()<<"\n";
        for(auto p : ans)
            cout<<p.first<<" "<<p.second<<"\n";
    }

    return 0;
}

