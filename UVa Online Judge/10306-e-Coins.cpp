#include <bits/stdc++.h>
using namespace std;

#define MAX (int)1e7

vector<int>data;

int dp[41][90001];

void reset(){
    data.clear();
    memset(dp,-1,sizeof dp);
}

int knap(int i, int w){
    printf("%d %d\n",i,w);
    if(w==0) return i;
    if(i==data.size()) return MAX;
    if(dp[i][w]!=-1) return dp[i][w];

    int r1=MAX, r2=MAX;
    if(w-data[i]>=0) r1=knap(i,w-data[i]);
    r2=knap(i+1,w);

    return dp[i][w]=min(r1,r2);
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,amount,x,y;
        scanf("%d%d",&n,&amount);
        reset();

        for(int i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            data.push_back(x*x+y*y);
        }

        int ans=knap(0,amount*amount);
        printf("%d\n",ans);
    }
    return 0;
}
