#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int n,Set=0;
    while(scanf("%d",&n)==1){
        int busyness[n],road,a,b,cost[n][n];
        memset(cost,INF,sizeof cost);

        for(int i=0;i<n;i++){
            scanf("%d",&busyness[i]);
            cost[i][i]=0;
        }

        scanf("%d",&road);

        for(int i=0;i<road;i++){
            scanf("%d %d",&a,&b);
            a--,b--;
            int hold=busyness[b]-busyness[a];
            cost[a][b]=hold*hold*hold;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(cost[i][k]==INF || cost[k][j]==INF) continue;
                    cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                }
            }
        }

        int q;
        a=0;
        scanf("%d",&q);
        printf("Set #%d\n",++Set);

        for(int i=0;i<q;i++){
            bool negative=false;
            scanf("%d",&b);
            b--;

            for(int i=0;i<n && !negative;i++)
                if(cost[a][i]!=INF && cost[i][b]!=INF && cost[i][i]<0)
                    negative=true;

            if(cost[a][b]<3 || cost[a][b]==INF || negative) puts("?");
            else printf("%d\n",cost[a][b]);
        }
    }
    return 0;
}
