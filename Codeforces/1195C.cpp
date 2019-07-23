#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long a[n+1], b[n+1];

        for(int i=1; i<=n; i++)
            cin>>a[i];

        for(int i=1; i<=n; i++)
            cin>>b[i];

        long long dp[2][n+1];

        memset(dp, 0, sizeof dp);

        for(int i=0; i<=n-1; i++){
            dp[0][i+1] = max(dp[0][i+1], dp[1][i]+a[i+1]);
            dp[1][i+1] = max(dp[1][i+1], dp[0][i]+b[i+1]);

            if(i==n-1)
                continue;

            dp[0][i+2] = max(dp[0][i+2], dp[1][i]+a[i+2]);
            dp[1][i+2] = max(dp[1][i+2], dp[0][i]+b[i+2]);
        }

        cout<<max(dp[0][n], dp[1][n])<<endl;
    }

    return 0;
}

