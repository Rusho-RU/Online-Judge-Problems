#include <bits/stdc++.h>
using namespace std;

#define MAX 210

vector<int>data;
int d,m;
int dp[MAX][30][30];

int knap(int i, int c, int w){
    if(c==m){
        if(w==0) return 1;
        else return 0;
    }

    if(i==data.size()) return 0;

    if(dp[i][c][w]!=-1) return dp[i][c][w];

    int r1=0, r2=0;

    r1=knap(i+1,c+1,(((w+data[i])%d)+d)%d);
    r2=knap(i+1,c,w);

    return dp[i][c][w]=r1+r2;
}

int main(){
    int n,q,test=0;

    while(scanf("%d%d",&n,&q) && n+q){
        int val;

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            data.push_back(val);
        }

        printf("SET %d:\n",++test);

        for(int i=1;i<=q;i++){
            scanf("%d%d",&d,&m);
            memset(dp,-1,sizeof dp);
            int ans=knap(0,0,0);
            printf("QUERY %d: %d\n",i,ans);
        }
        data.clear();
    }
    return 0;
}
