#include <bits/stdc++.h>
using namespace std;

vector<int>price, favour;

int dp[101][10001], m;

int knap(int i, int w){
    if(w<0 && m<=1800) return -1000;
    if(w>m+200) return -1000;

    if(i==price.size()){
        if(w>m && w<=2000)
            return -1000;
        return 0;
    }

    if(dp[i][w]!=-1) return dp[i][w];

    int r1=0,r2=0;

    r1=knap(i+1,w+price[i])+favour[i];
    r2=knap(i+1,w);

    return dp[i][w]=max(r1,r2);
}

void reset(){
    memset(dp,-1,sizeof dp);
    price.clear();
    favour.clear();
    return;
}

int main(){
    int n;

    while(scanf("%d%d",&m,&n)==2){
        int val;
        reset();

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            price.push_back(val);
            scanf("%d",&val);
            favour.push_back(val);
        }

        int ans=knap(0,0);
        printf("%d\n",ans);
    }
    return 0;
}
