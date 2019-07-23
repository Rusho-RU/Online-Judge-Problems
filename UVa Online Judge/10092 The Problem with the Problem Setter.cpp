#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAXN 1000

struct Edge{
    int u, v, cap, flow;
    Edge(int u, int v, int cap, int flow){
        this->u = u;
        this->v = v;
        this->cap = cap;
        this->flow = flow;
    }
};

vector<Edge>e;
vector<int>adj[MAXN];
int ptr[MAXN], level[MAXN], parent[MAXN];

void add_edge(int u, int v, int cap){
    adj[u].push_back((int)e.size());
    e.push_back(Edge(u, v, cap, 0));

    adj[v].push_back((int)e.size());
    e.push_back(Edge(v, u, 0, 0));

    return;
}

bool bfs(int source, int sink){
    memset(level, -1, sizeof level);

    queue<int>q;
    q.push(source);
    level[source] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto i : adj[u]){
            int v = e[i].v;
            if(level[v]==-1 && e[i].cap > e[i].flow){
                q.push(v);
                level[v] = level[u]+1;
            }
        }
    }

    return level[sink]!=-1;
}

int dfs(int u, int sink, int bottleneck){
    if(bottleneck==0)
        return 0;

    if(u==sink)
        return bottleneck;

    for(; ptr[u]<adj[u].size(); ptr[u]++){
        int i = adj[u][ptr[u]];
        int v = e[i].v;

        if(level[v]!=level[u]+1)
            continue;

        int pushed = dfs(v, sink, min(bottleneck, e[i].cap-e[i].flow));

        if(pushed>0){
            e[i].flow += pushed;
            e[i^1].flow -= pushed;

            return pushed;
        }
    }

    return 0;
}

int dinic(int source, int sink){
    int flow = 0;

    while(bfs(source, sink)){
        memset(ptr, 0, sizeof ptr);
        while(int pushed = dfs(source, sink, INT_MAX))
            flow+=pushed;
    }

    return flow;
}

int main(){
    FasterIO;

    int nc, np;

    while(cin>>nc>>np && nc+np){
        int num[nc], tot=0, n = nc+np+1;

        for(int i=0; i<nc; i++){
            cin>>num[i];
            tot+=num[i];
        }

        for(int i=1; i<=nc; i++)
            add_edge(0, i, num[i-1]);

        for(int i=nc+1; i<=nc+np; i++)
            add_edge(i, n, 1);

        for(int i=nc+1; i<=nc+np; i++){
            int c;
            cin>>c;
            while(c--){
                int cat;
                cin>>cat;
                add_edge(cat, i, 1);
            }
        }

        int max_flow = dinic(0, n);

        if(max_flow!=tot){
            cout<<"0"<<endl;
            continue;
        }

        vector<int>ans[nc];

        for(int i=0; i<e.size(); i+=2){
            int u = e[i].u;
            int v = e[i].v;

            if(u==0 || v==n)
                continue;

            if(e[i].flow==1){
                ans[u-1].push_back(v);
            }
        }

        cout<<"1"<<endl;
        for(int i=0; i<nc; i++){
            for(int j=0; j<ans[i].size(); j++){
                cout<<ans[i][j];
                if(j==ans[i].size()-1)
                    cout<<endl;
                else
                    cout<<" ";
            }
        }
    }

    return 0;
}
