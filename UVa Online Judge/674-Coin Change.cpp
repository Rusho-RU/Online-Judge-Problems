#include <bits/stdc++.h>
using namespace std;

#define maxn 5
#define maxa 7490

int coin[]={50,25,10,5,1},n,dp[maxn][maxa];

int knap(int i, int amount){
    if(i==5) return 0;
    if(amount==0) return 1;
    if(dp[i][amount]!=-1) return dp[i][amount];

    int h1=0,h2;

    if(amount-coin[i]>=0) h1=knap(i,amount-coin[i]);
    h2=knap(i+1,amount);
    return dp[i][amount]=h1+h2;
}

int main(){
    memset(dp,-1,sizeof dp);
    while(scanf("%d",&n)==1){
        int ans=knap(0,n);
        printf("%d\n",ans);
    }
    return 0;
}
