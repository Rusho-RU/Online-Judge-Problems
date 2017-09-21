#include <bits/stdc++.h>
using namespace std;

#define MAX 101
#define INF 0x3f3f3f3f

int cost[MAX][MAX];

void Reset(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cost[i][j]=MAX;
        }
        cost[i][i]=0;
    }
    return;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int n,r,a,b,c,source,destination;
        scanf("%d%d",&n,&r);
        Reset(n);

        for(int i=0;i<r;i++){
            scanf("%d%d",&a,&b);
            cost[a][b]=cost[b][a]=1;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k) continue;
                for(int j=0;j<n;j++){
                    if(j==i || j==k) continue;
                    cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                }
            }
        }

        scanf("%d %d",&source,&destination);

        int ans=0;

        for(int i=0;i<n;i++)
            ans=max(ans,cost[source][i]+cost[i][destination]);

        printf("Case %d: %d\n",++Case,ans);
    }

    return 0;
}
