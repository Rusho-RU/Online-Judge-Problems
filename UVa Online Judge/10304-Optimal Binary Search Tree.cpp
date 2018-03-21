#include <bits/stdc++.h>
using namespace std;

#define MAX 260
#define INF 0x3f3f3f3f

int freq[MAX], sum[MAX], dp[MAX][MAX];

int OBST(int i, int j){
    if(j<i)
        return 0;
    if(dp[i][j]!=INF)
        return dp[i][j];

    for(int k=i; k<=j; k++){
        dp[i][j] = min(dp[i][j], OBST(i, k-1) + OBST(k+1, j) + sum[j] - sum[i-1] - freq[k]);
    }

    return dp[i][j];
}

int main(){
    int n;

    while(scanf("%d",&n)!=EOF){
        memset(dp, INF, sizeof dp);

        for(int i=1; i<=n; i++){
            scanf("%d",&freq[i]);
            sum[i] = sum[i-1] + freq[i];
        }

        int ans = OBST(1,n);
        printf("%d\n",ans);
    }

    return 0;
}
