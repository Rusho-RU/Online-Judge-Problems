#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

vector<pair<int, int> >edge;
vector<int>cost, startingPoint, adj[1001];
bool visited[1001];

void dfs(int source){
    visited[source] = true;
    startingPoint.push_back(source);

    for(int i=0; i<adj[source].size(); i++){
        int x = adj[source][i];

        if(!visited[x])
            dfs(x);
    }

    return;
}

void BellmanFord(int s, int n){
    int dist[n];
    memset(dist, INF, sizeof dist);

    for(int i=0; i<n; i++){
        for(int e=0; e<edge.size(); e++){
            int u = edge[e].first;
            int v = edge[e].second;
            int c = cost[e];

            if(dist[u] + c < dist[v])
                dist[v] = dist[u] + c;
        }
    }

    for(int i=0; i<n; i++)
        printf("%d ",dist[i]);
    cout<<endl;

    for(int e=0; e<edge.size(); e++){
        int u = edge[e].first;
        int v = edge[e].second;
        int c = cost[e];

        if(dist[u] + c < dist[v] && !visited[v])
            dfs(v);
        if(dist[u] + c < dist[v])
            cout<<u<<" "<<v<<endl;
    }

    return;
}

void reset(int n){
    edge.clear();
    startingPoint.clear();
    cost.clear();
    for(int i=0; i<n; i++)
        adj[i].clear(), visited[i] = false;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, e;
        scanf("%d%d",&n,&e);
        reset(n);

        while(e--){
            int u, v, c;
            scanf("%d %d %d",&u,&v,&c);

            edge.push_back(make_pair(v,u));
            adj[v].push_back(u);
            cost.push_back(c);
        }

        BellmanFord(0,n);

        printf("Case %d:",++Case);

        if(startingPoint.empty())
            puts(" impossible");

        else{
            sort(startingPoint.begin(), startingPoint.end());

            for(int i=0; i<startingPoint.size(); i++)
                printf(" %d",startingPoint[i]);

            puts("");
        }
    }

    return 0;
}
