//Floyd-Warshall method

#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int cities,streets,query,Case=0;
    while(scanf("%d%d%d",&cities,&streets,&query) && cities+streets+query){
        int n=cities,cost[n][n],c1,c2,c;
        memset(cost,INF,sizeof cost);

        for(int i=0;i<streets;i++){
            scanf("%d%d%d",&c1,&c2,&c);
            c1--,c2--;
            cost[c1][c2]=cost[c2][c1]=c;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(cost[i][k]!=INF && cost[k][j]!=INF)
                        cost[i][j]=min(cost[i][j],max(cost[i][k],cost[k][j]));
                }
            }
        }

        if(Case) printf("\n");
        printf("Case #%d\n",++Case);

        while(query--){
            scanf("%d %d",&c1,&c2);
            c1--,c2--;
            if(cost[c1][c2]==INF) puts("no path");
            else printf("%d\n",cost[c1][c2]);
        }
    }
    return 0;
}
