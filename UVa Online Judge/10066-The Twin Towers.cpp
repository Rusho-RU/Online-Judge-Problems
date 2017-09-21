#include <bits/stdc++.h>
using namespace std;

int d1[105], d2[105], n1, n2, dp[105][105];

int LCS(int i, int j){
    if(i==n1 || j==n2)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    if(d1[i] == d2[j])
        return dp[i][j] = 1+LCS(i+1, j+1);

    return dp[i][j] = max(LCS(i+1, j), LCS(i, j+1));
}

int main(){
    int Case=0;
    while(scanf("%d %d",&n1, &n2) && n1+n2){
        memset(dp, -1, sizeof dp);

        for(int i=0;i<n1;i++)
            scanf("%d",&d1[i]);

        for(int i=0;i<n2;i++)
            scanf("%d",&d2[i]);

        int ans = LCS(0,0);

        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",++Case, ans);
    }

    return 0;
}
