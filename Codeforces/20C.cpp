#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
#define INF 1000000000000

vector<pair<int, int> >adj[MAX];
long long data[MAX];
int parent[MAX];
priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > >pq;

void reset(int n){
    for(int i=0; i<n; i++){
        adj[i].clear();
        parent[i] = -1;
        data[i] = INF;
    }
}

void dijkstra(int u){
    data[u] = 0;
    long long c;

    pq.push(make_pair(0, u));

    while(!pq.empty()){
        u = pq.top().second;
        c = pq.top().first;
        pq.pop();

        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i].first;
            int cost = adj[u][i].second;

            if(c+cost < data[v]){
                data[v] = c+cost;
                pq.push(make_pair(data[v], v));
                parent[v] = u;
            }
        }
    }

    return;
}

int main(){
    int n, m;

    while(scanf("%d %d",&n,&m)==2){
        reset(n);

        while(m--){
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            u--, v--;

            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }

        dijkstra(0);

        n--;

        if(data[n]==INF){
            puts("-1");
            continue;
        }

        stack<int>stck;

        while(n != -1){
            stck.push(n+1);
            n = parent[n];
        }

        while(1){
            printf("%d",stck.top());
            stck.pop();

            if(stck.empty()){
                puts("");
                break;
            }

            else printf(" ");
        }
    }

    return 0;
}
