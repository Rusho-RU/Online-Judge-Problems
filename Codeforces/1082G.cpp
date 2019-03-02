#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAXN 2050
#define ll long long

struct Edge{
    int u, v;
    ll cap, flow;

    Edge(int u, int v, ll cap, ll flow){
        this->u = u;
        this->v = v;
        this->cap = cap;
        this->flow = flow;
    }
};

vector<Edge>e;
vector<int>adj[MAXN];
int ptr[MAXN], level[MAXN];

void add_edge(int u, int v, ll cap){
    adj[u].push_back((int)e.size());
    e.push_back(Edge(u, v, cap, 0));

    adj[v].push_back((int)e.size());
    e.push_back(Edge(v, u, 0, 0));

    return;
}

bool bfs(int u, int sink){
    memset(level, 0, sizeof level);

    queue<int>q;
    q.push(u);
    level[u] = 1;

    while(!q.empty()){
        u = q.front();
        q.pop();

        for(auto id : adj[u]){
            int v = e[id].v;
            if(!level[v] && e[id].cap > e[id].flow){
                q.push(v);
                level[v] = level[u]+1;
            }
        }
    }

    return level[sink];
}

ll dfs(int u, int sink, ll bottleneck){
    if(!bottleneck)
        return 0;

    if(u==sink)
        return bottleneck;

    for( ; ptr[u] < adj[u].size(); ptr[u]++){
        int id = adj[u][ptr[u]];
        int v = e[id].v;

        if(level[v] != level[u]+1)
            continue;

        int pushed = dfs(v, sink, min(bottleneck, e[id].cap - e[id].flow));

        if(pushed){
            e[id].flow += pushed;
            e[id^1].flow -= pushed;
            return pushed;
        }
    }

    return 0;
}

ll dinic(int source, int sink){
    ll flow = 0;

    while(bfs(source, sink)){
        memset(ptr, 0, sizeof ptr);
        while(ll pushed = dfs(source, sink, LONG_MAX))
            flow += pushed;
    }

    return flow;
}


int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int nn = n;
        ll capacity = 0;
        n = n+m+2;

        for(int u = 1; u<=nn; u++){
            ll cap;
            cin>>cap;

            add_edge(u, n, cap);
        }

        for(int e = 0; e<m; e++){
            int u, v;
            ll cap;
            cin>>u>>v>>cap;

            int id = nn+e+1;
            capacity += cap;

            add_edge(0, id, cap);
            add_edge(id, u, LONG_MAX);
            add_edge(id, v, LONG_MAX);
        }

        ll max_flow = dinic(0, n);
        ll min_cut = capacity - max_flow;

        cout<<min_cut<<endl;
    }

    return 0;
}
