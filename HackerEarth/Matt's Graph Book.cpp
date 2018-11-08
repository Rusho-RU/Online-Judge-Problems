#include <bits/stdc++.h>
using namespace std;

#define MAX 100050

vector<int>adj[MAX];
int node;
bool visited[MAX];

void bfs(int root){
    queue<int>q;
    q.push(root);
    visited[root] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];
            if(v!=node && !visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }

    return;
}

bool isConnected(int n){
    for(int i=0; i<n; i++)
        if(i!=node && !visited[i])
            return false;
    return true;
}

void reset(int n){
    for(int i=0; i<n; i++){
        visited[i] = false;
        adj[i].clear();
    }
    return;
}

int main(){
    int n,m;

    while(scanf("%d%d",&n,&m)==2){
        reset(n);

        while(m--){
            int u, v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        scanf("%d",&node);

        bfs(0);

        if(isConnected(n))
            puts("Connected");
        else
            puts("Not Connected");
    }

    return 0;
}
