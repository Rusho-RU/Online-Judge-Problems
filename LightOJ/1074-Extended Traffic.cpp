#include <bits/stdc++.h>
using namespace std;

#define MAX 201
#define INF 0x3f3f3f3f

vector<int>adj[MAX], cost[MAX];
int dist[MAX];

void SPFA(int sourceNode){
    queue<int>q;
    q.push(sourceNode);
    dist[sourceNode] = 0;

    while(!q.empty()){
        int currentNode = q.front();
        q.pop();

        for(int i=0; i<adj[currentNode].size(); i++){
            int nextNode = adj[currentNode][i];
            int hold = dist[currentNode] + cost[currentNode][i];

            if(dist[nextNode]!=INF && hold<dist[nextNode])
                continue;

            if(hold < dist[nextNode]){
                dist[nextNode] = hold;
                q.push(nextNode);
            }
        }
    }

    return;
}

void reset(int n){
    for(int i; i<n; i++){
        adj[i].clear();
        cost[i].clear();
    }

    memset(dist, INF, sizeof dist);

    return;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int busyness[n];

        reset(n);

        for(int i=0; i<n; i++){
            scanf("%d",&busyness[i]);
        }

        int edge;
        scanf("%d",&edge);

        for(int i=0; i<edge; i++){
            int u,v;
            scanf("%d %d",&u,&v);
            u--, v--;

            adj[u].push_back(v);

            int c = busyness[v]-busyness[u];
            cost[u].push_back(c*c*c);

        }

        SPFA(0);

        int q;
        scanf("%d",&q);
        printf("Case %d:\n",++Case);

        while(q--){
            int d;
            scanf("%d",&d);
            d--;

            if(dist[d]==INF || dist[d]<3)
                puts("?");
            else
                printf("%d\n",dist[d]);
        }
    }

    return 0;
}
