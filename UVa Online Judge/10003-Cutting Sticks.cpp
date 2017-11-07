#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

vector<int>cutPoint;
int dp[55][55];

int MCM(int i, int j){
    if(i>=j-1)
        return 0;
    if(dp[i][j]!=INF)
        return dp[i][j];

    for(int k=i+1; k<j; k++){
        int hold = MCM(i,k) + MCM(k,j) + cutPoint[j] - cutPoint[i];
        dp[i][j] = min(dp[i][j], hold);
    }

    return dp[i][j];
}

int main(){
    int l;
    while(scanf("%d",&l) && l){
        int n,val;
        scanf("%d",&n);

        cutPoint.push_back(0);

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            cutPoint.push_back(val);
        }

        cutPoint.push_back(l);

        memset(dp, INF, sizeof dp);

        int ans = MCM(0, cutPoint.size()-1);

        printf("The minimum cutting is %d.\n",ans);
        cutPoint.clear();
    }

    return 0;
}
