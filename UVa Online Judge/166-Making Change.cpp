#include <bits/stdc++.h>
using namespace std;

#define INF (int)1e7

int coin[6]={5,10,20,50,100,200}, limit[6], dp[6][100][10000];

int check(){
    return limit[0]+limit[1]+limit[2]+limit[3]+limit[4]+limit[5];
}

int knap(int i, int c, int w){
    if(!w) return c;
    if(i==6) return INF;
    if(dp[i][c][w]!=-1) return dp[i][c][w];

    int r1=INF,r2=INF;
    if(limit[i]>0 && w-coin[i]<=0) r1=knap(i,c+1,w-coin[i]);
    r2=knap(i+1,c,w);

    return dp[i][c][w]=min(r1,r2);
}

int main(){
    memset(dp,-1,sizeof dp);
    while(scanf("%d%d%d%d%d%d",&limit[0],&limit[1],&limit[2],&limit[3],&limit[4],&limit[5]) && check()){
        double money;
        scanf("%lf",&money);
        int amount=(int)(money*100), ans;
        ans=knap(0,0,amount);
        printf("%d\n",ans);
    }
    return 0;
}
