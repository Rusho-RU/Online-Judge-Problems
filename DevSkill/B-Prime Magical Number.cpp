#include <bits/stdc++.h>
using namespace std;

int dp[4][100001], n;
int prime[] = {2,3,5,7};

int knapsack(int i, int w){
    if(w>n)
        return 0;
    if(i==4)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];

    int ret1 = knapsack(i,w*10+prime[i]);
    int ret2 = knapsack(i+1,w);

    return dp[i][w] = ret1 + ret2 + 1;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        memset(dp, -1, sizeof dp);
        int ans = knapsack(0,0);
        printf("%d\n",ans);
    }

    return 0;
}
