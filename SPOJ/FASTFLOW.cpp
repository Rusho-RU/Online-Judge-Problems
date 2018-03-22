#include <bits/stdc++.h>
using namespace std;

#define MAX 5050

long long cap[MAX][MAX], flow[MAX][MAX];
vector<int>adj[MAX];
int level[MAX], startFrom[MAX];

bool bfs(int source, int sink, int n){
    for(int i=0; i<n; i++)
        level[i] = -1;

    queue<int>q;
    q.push(source);
    level[source] = 1;

    while(!q.empty()){
        int from = q.front();
        q.pop();

        for(int i=0; i<adj[from].size(); i++){
            int to = adj[from][i];

            if(level[to]==-1 && cap[from][to] > flow[from][to]){
                level[to] = level[from] + 1;
                if(to==sink)
                    return true;
                q.push(to);
            }
        }
    }

    return false;
}

long long dfs(int from, int sink, long long bottleneck){
    if(from==sink)
        return bottleneck;

    for(; startFrom[from]<adj[from].size(); startFrom[from]++){
        int to = adj[from][startFrom[from]];

        if(cap[from][to] > flow[from][to] && level[to] == level[from] + 1){
            long long value = dfs(to, sink, min(bottleneck, cap[from][to]-flow[from][to]));
            if(value){
                flow[from][to]+=value;
                flow[to][from]-=value;
                return value;
            }
        }
    }

    return 0;
}

long long Dinics(int source, int sink, int n){
    long long max_flow = 0;

    while(bfs(source, sink, n)){
        for(int i=0; i<n; i++)
            startFrom[i] = 0;
        while(long long f = dfs(source, sink, LONG_LONG_MAX)){
            max_flow+=f;
        }
    }

    return max_flow;
}

void reset(int n){
    for(int i=0; i<n; i++){
        adj[i].clear();
        for(int j=0; j<n; j++){
            cap[i][j] = flow[i][j] = 0;
        }
    }
}

int main(){
    int n,m;

    while(scanf("%d%d",&n,&m)==2){
        while(m--){
            int u,v;
            long long w;
            scanf("%d%d%lld",&u,&v,&w);
            u--, v--;

            adj[u].push_back(v);
            adj[v].push_back(u);

            cap[u][v]+=w;
            cap[v][u]+=w;
        }

        long long flow = Dinics(0, n-1, n);
        printf("%lld\n",flow);

        reset(n);
    }

    return 0;
}
