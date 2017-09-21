#include <bits/stdc++.h>
using namespace std;

int data[21];
long long dp[21][10000];

void calcu(){
    for(int i=1;i<=21;i++)
        data[i-1]=i*i*i;
}

long long knap(int i, int c){
    if(c==0) return 1;
    if(i==21) return 0;
    if(dp[i][c]!=-1) return dp[i][c];

    long long r1=0,r2=0;
    if(c-data[i]>=0) r1=knap(i,c-data[i]);
    r2=knap(i+1,c);

    return dp[i][c]=r1+r2;
}

int main(){
    int n;
    calcu();
    memset(dp,-1,sizeof dp);

    while(scanf("%d",&n)==1){
        long long ans=knap(0,n);
        printf("%lld\n",ans);
    }
    return 0;
}
