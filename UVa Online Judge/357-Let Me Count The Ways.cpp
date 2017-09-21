#include <bits/stdc++.h>
using namespace std;

#define MAX 30001
typedef long long ll;

ll coin[]={50,25,10,5,1}, dp[5][MAX];

ll knap(int i, ll amount){
    if(amount==0) return 1;
    if(i==5) return 0;
    if(dp[i][amount]!=-1) return dp[i][amount];

    ll r1=0, r2;
    if(amount>=coin[i]) r1=knap(i,amount-coin[i]);
    r2=knap(i+1,amount);
    return dp[i][amount]=r1+r2;
}

int main(){
    int n;
    memset(dp,-1,sizeof dp);
    while(scanf("%d",&n)==1){
        ll ans=knap(0,n);
        if(ans==1) printf("There is only 1 way to produce %d cents change.\n",n);
        else printf("There are %lld ways to produce %d cents change.\n",ans,n);
    }
    return 0;
}
