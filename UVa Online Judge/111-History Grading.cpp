#include <bits/stdc++.h>
using namespace std;

#define MAX 25

int order[MAX], answered[MAX], dp[MAX][MAX], n, largest, cnt;

int LCS(int i, int j){
    if(i==n || j==n)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    if(order[i] == answered[j])
        return dp[i][j] = 1+LCS(i+1, j+1);

    return dp[i][j] = max(LCS(i+1, j), LCS(i, j+1));
}

int main(){
    while(scanf("%d",&n)==1){
        int val;
        for(int i=0;i<n;i++){
            scanf("%d",&val);
            order[val-1]=i+1;
        }

        while(scanf("%d",&val) == 1){
            memset(dp, -1, sizeof dp);
            answered[val-1]=1;

            for(int i=1;i<n;i++){
                scanf("%d",&val);
                answered[val-1]=i+1;
            }

            int ans = LCS(0,0);
            printf("%d\n",ans);
        }
    }

    return 0;
}
