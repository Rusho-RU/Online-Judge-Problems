#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 110

int n, low[MAX], t, parent[MAX], d[MAX];
vector<int>adj[MAX];
bool visited[MAX], articulation_point[MAX];

void reset(int n){
    t=0;
    for(int i=0; i^n; i++){
        adj[i].clear();
        articulation_point[i] = visited[i] = false;
        parent[i] = -1;
    }
}

void dfs(int u){
    low[u] = d[u] = ++t;
    visited[u] = true;

    int child = 0;

    for(int v : adj[u]){
        if(v==parent[u])
            continue;
        if(visited[v])
            low[u] = min(low[u], d[v]);
        else{
            child++;
            parent[v] = u;
            dfs(v);
            low[u] = min(low[u], low[v]);

            if(parent[u]!=-1 && d[u] <= low[v])
                articulation_point[u] = true;
        }
    }

    if(parent[u]==-1 && child>1)
        articulation_point[u] = true;

    ++t;

    return;
}

int main(){
    FasterIO;

    while(cin>>n && n){
        reset(n);

        int u;
        while(cin>>u && u){
            u--;
            int v;
            while(cin>>v){
                v--;
                adj[u].push_back(v);
                adj[v].push_back(u);

                if(cin.get()=='\n')
                    break;
            }
        }

        dfs(0);

        int ans = 0;

        for(int i=0; i^n; i++){
            ans+=articulation_point[i];
        }

        cout<<ans<<"\n";
    }

    return 0;
}

