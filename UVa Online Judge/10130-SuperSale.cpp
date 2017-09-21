#include <bits/stdc++.h>
using namespace std;

#define MAX 1001
#define maxc 31

int weight[MAX], price[MAX],cap,n,dp[MAX][maxc];

int knap(int i, int w){
    if(i==n) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    int p1=0,p2;

    if(w>=weight[i]) p1=price[i]+knap(i+1,w-weight[i]);

    p2=knap(i+1,w);

    return dp[i][w]=max(p1,p2);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(dp,-1,sizeof dp);
        scanf("%d",&n);
        int p,q,sum=0;

        for(int i=0;i<n;i++)
            scanf("%d %d",&price[i],&weight[i]);

        scanf("%d",&q);
        while(q--){
            scanf("%d",&cap);
            sum+=knap(0,cap);
        }

        printf("%d\n",sum);
    }
    return 0;
}
