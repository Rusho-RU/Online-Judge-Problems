#include <bits/stdc++.h>
using namespace std;

#define MOD 100000007
#define MAXn 51
#define MAXk 1001
#define MAXl 21

vector<int>coin;

int dp[MAXn][MAXl][MAXk], limit[101];

int knap(int i, int c, int a){
    if(a==0) return 1;
    if(i==coin.size()) return 0;
    if(dp[i][c][a]!=-1) return dp[i][c][a];

    int r1=0,r2=0;

    if(c<limit[coin[i]] && a-coin[i]>=0) r1=knap(i,c+1,a-coin[i]);
    r2=knap(i+1,0,a);

    return dp[i][c][a]=(r1%MOD + r2%MOD) %MOD;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int n,k,val;
        scanf("%d%d",&n,&k);
        memset(dp,-1,sizeof dp);

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            coin.push_back(val);
        }

        for(int i=0;i<n;i++)
            scanf("%d",&limit[coin[i]]);

        int ans=knap(0,0,k);
        printf("Case %d: %d\n",++Case,ans);

        coin.clear();
    }
    return 0;
}
