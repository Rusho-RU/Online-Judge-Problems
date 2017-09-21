#include <bits/stdc++.h>
using namespace std;

#define MOD 10056

int dp[1001], nCr[1001][1001],ans;

void calculate(){
    for(int i=0;i<1001;i++) nCr[i][0]=1, nCr[i][i]=1;

    for(int i=1;i<1001;i++)
        for(int j=1;j<1001;j++)
            nCr[i][j]=nCr[i-1][j-1]% MOD + nCr[i-1][j] % MOD %MOD;

    for(int i=1;i<1001;i++){
        dp[i]=1;
        for(int j=i-1, k=1;j;k++, j--){
            dp[i]=(dp[i] + (nCr[i][j]*dp[k]) %MOD) %MOD;
        }
    }

    return;
}

int main(){
    calculate();
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",++Case,dp[n]);
    }
    return 0;
}
