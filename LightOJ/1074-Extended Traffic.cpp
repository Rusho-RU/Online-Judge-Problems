#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

vector<pair<int, int> >edge;
vector<int>cost;
int dist[201], busyness[201];

bool BellmanFord(int source, int n){
    memset(dist, INF, sizeof dist);

    dist[source] = 0;

    for(int j=1; j<n; j++){
        for(int i=0; i<edge.size(); i++){
            int u = edge[i].first;
            int v = edge[i].second;
            int c = cost[i];

            if(dist[u]!=INF && dist[u] + c < dist[v])
                dist[v] = dist[u] + c;
        }
    }

    for(int i=0; i<edge.size(); i++){
        int u = edge[i].first;
        int v = edge[i].second;
        int c = cost[i];

        if(dist[u]!=INF && dist[u] + c < dist[v])
            return true;
    }

    return false;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        for(int i=0; i<n; i++)
            scanf("%d",&busyness[i]);

        int e;
        scanf("%d",&e);

        while(e--){
            int u, v;
            scanf("%d%d",&u,&v);
            u--, v--;

            edge.push_back(make_pair(u,v));
            int val = busyness[v] - busyness[u];

            cost.push_back(val*val*val);
        }

        bool hasNegativeCycle = BellmanFord(0,n);

        int query;
        scanf("%d",&query);
        printf("Case %d:\n",++Case);

        while(query--){
            int q;
            scanf("%d",&q);
            q--;

            if(dist[q]>10000 || dist[q]<3)
                puts("?");
            else
                printf("%d\n",dist[q]);
        }

        cost.clear();
        edge.clear();
    }

    return 0;
}
