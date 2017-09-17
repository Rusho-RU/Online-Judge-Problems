#include <bits/stdc++.h>
using namespace std;

vector<int>coin;
long long dp[51][251];

long long knap(int i, int w){
    if(!w) return 1;
    if(i==coin.size()) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    long long r1=0, r2=0;
    if(w-coin[i]>=0) r1=knap(i,w-coin[i]);
    r2=knap(i+1,w);

    return dp[i][w]=r1+r2;
}

int main(){
    int n,m,val;
    scanf("%d%d",&n,&m);
    memset(dp, -1, sizeof dp);

    for(int i=0;i<m;i++){
        scanf("%d",&val);
        coin.push_back(val);
    }

    long long ans=knap(0,n);
    printf("%lld\n",ans);
    return 0;
}
