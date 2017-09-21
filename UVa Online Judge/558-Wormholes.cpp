#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAX 1001

int minimum[MAX];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int node,edge,a,b,c,i;
        scanf("%d%d",&node,&edge);
        vector<int>adj[node];
        int cost[node][node];
        memset(minimum,INF,sizeof minimum);

        for(int i=0;i<edge;i++){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].push_back(b);
            cost[a][b]=c;
        }

        queue<int>q;
        q.push(0);
        minimum[0]=0;
        bool possible=false;
        while(!q.empty() && !possible){
            int s=q.front();
            q.pop();
            for(int i=0;i<adj[s].size();i++){
                int x=adj[s][i],hold=minimum[s]+cost[s][x];

                if(hold<minimum[x]){
                    if(minimum[x]!=INF) possible=true;
                    minimum[x]=hold;
                    q.push(x);
                }
            }
        }

        if(possible) printf("possible\n");
        else printf("not possible\n");
    }
    return 0;
}
