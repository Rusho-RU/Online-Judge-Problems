#include <bits/stdc++.h>
using namespace std;

vector<int>coin;
int dp[2001][2001];

int knap(int i, int w){
    if(!w || i==coin.size()) return w;

    if(dp[i][w]!=-1) return dp[i][w];

    int r1=w, r2;

    if(w-coin[i]>=0) r1=knap(i,w-coin[i]);
    r2=knap(i+1,w);

    return dp[i][w]=min(r1,r2);
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        memset(dp, -1, sizeof dp);
        int n,amount,val;
        scanf("%d%d",&n,&amount);

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            coin.push_back(val);
        }

        amount-=knap(0,amount);
        printf("%d\n",amount);
        coin.clear();
    }
    return 0;
}
