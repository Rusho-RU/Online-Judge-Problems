#include <bits/stdc++.h>
using namespace std;

int a,b,c,dp[100000001];

#define MOD 10007

int f(int n){
    if(n<=2)
        return 0;
    if(dp[n]!=-1) return dp[n];

    return dp[n] = (a*f(n-1) + b*f(n-3) + c) % MOD;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        memset(dp, -1, sizeof dp);
        scanf("%d%d%d%d",&n,&a,&b,&c);
        cout<<f(n)<<endl;
    }

    return 0;
}
