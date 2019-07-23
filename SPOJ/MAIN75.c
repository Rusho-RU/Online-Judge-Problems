///https://math.stackexchange.com/questions/1388564/number-of-binary-search-trees-on-n-nodes-of-height-up-to-h

#include <stdio.h>

#define MAX 510

const int MOD = 1000000007;

long long dp[MAX][MAX];

void reset(){
    int i, j;
    for(i=0; i<MAX; i++)
        for(j=0; j<MAX; j++)
            dp[i][j] = -1LL;
}

long long dfs(int n, int h){
    if(h==-1)
        return 0;

    if(n==0)
        return 1;
    if(h==0)
        return n==1;

    if(~dp[n][h])
        return dp[n][h];

    int i;
    long long ret = 0;

    for(i=1; i<=n; i++)
        ret = (ret+(dfs(n-i, h-1)*dfs(i-1, h-1))%MOD)%MOD;

    return dp[n][h] = ret;
}

int main(){
    int t;
    scanf("%d", &t);

    reset();

    while(t--){
        int n, h;
        scanf("%d %d", &n, &h);

        long long ans = (dfs(n, h)-dfs(n, h-1)+MOD)%MOD;

        printf("%lld\n", ans);
    }

    return 0;
}
