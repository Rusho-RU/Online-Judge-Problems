#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int n,r,Case=0;
    while(scanf("%d%d",&n,&r) && n+r){
        int cost[n][n],a,b,c;
        memset(cost,0,sizeof cost);
        for(int i=0;i<r;i++){
            scanf("%d%d%d",&a,&b,&c);
            a--,b--;
            cost[a][a]=cost[b][b]=0;
            cost[a][b]=cost[b][a]=--c;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k) continue;
                for(int j=0;j<n;j++){
                    if(j==i || j==k) continue;
                    cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
                }
            }
        }

        scanf("%d%d%d",&a,&b,&c);
        a=cost[a-1][b-1];
        int ans=c/a+(c%a!=0);
        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",++Case,ans);
    }

    return 0;
}
