#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, total=0;
        cin>>n;

        int coin[n+1];

        for(int i=1; i<=n; i++){
            cin>>coin[i];
            total+=coin[i];
        }

        int t = total/2;

        int dp[2][t+1];

        dp[0][0] = dp[1][0] = 0;

        for(int i=0; i<=t; i++)
            dp[0][i] = 0;

        int now = 1;
        for(int i=1; i<=n; i++, now^=1)
            for(int j=0; j<=t; j++)
                dp[now][j] = j>=coin[i] ? max(dp[now^1][j], dp[now^1][j-coin[i]]+coin[i]) : dp[now^1][j];

        cout<<total-2*dp[n&1][t]<<endl;
    }

    return 0;
}

