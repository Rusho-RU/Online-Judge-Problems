#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 110
#define INF 0x3f3f3f3f

int n, counter[MAX], dp[MAX][MAX][MAX]; ///dp[current day] [# of breakouts] [current day value]

int main(){
    FasterIO;

    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);

    while(cin>>n){
        for(int i=0; i^n; i++)
            cin>>counter[i];

        memset(dp, INF, sizeof dp);

        dp[0][1][0] = counter[0]!=0;

        for(int i=1; i<n; i++){
            for(int j=1; j<=n; j++){
                for(int k=0; k<n; k++){
                    if(!k)
                        for(int k2=0; k2<n; k2++)
                            dp[i][j][k] = min(dp[i][j][k], dp[i-1][j-1][k2]);
                    else
                        dp[i][j][k] = min(dp[i][j][k], dp[i-1][j][k-1]);
                    if(counter[i]!=k)
                        dp[i][j][k]++;
                }
            }
        }

        for(int j=1; j<=n; j++){
            int ans = INF;
            for(int k=0; k<n; k++)
                ans = min(ans, dp[n-1][j][k]);
            cout<<ans<<endl;
        }
    }

    return 0;
}
