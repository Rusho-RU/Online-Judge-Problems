#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010
#define MAXW 35
#define MAXG 110

int main(){
    int t, price[MAXN], weight[MAXN], cap[MAXG];
    scanf("%d",&t);

    int dp[MAXN][MAXW];

    while(t--){
        int n, p, mx = INT_MIN;
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
            scanf("%d %d",&price[i], &weight[i]);

        scanf("%d",&p);
        for(int i=0; i<p; i++)
            scanf("%d",&cap[i]), mx = max(mx, cap[i]);

        for(int i=0; i<=n; i++) dp[i][0] = 0;
        for(int i=0; i<MAXW; i++) dp[0][i] = 0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=mx; j++){
                dp[i][j] = weight[i] <= j ? max(dp[i-1][j], dp[i-1][j-weight[i]] + price[i]) : dp[i-1][j];
            }
        }

        int ans = 0;

        for(int i=0; i<p; i++)
            ans+=dp[n][cap[i]];

        printf("%d\n", ans);
    }

    return 0;
}
