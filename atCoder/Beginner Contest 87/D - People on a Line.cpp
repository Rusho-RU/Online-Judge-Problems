#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

vector<int>adj[MAX], edgeCost[MAX];
bool visited[MAX], exists;
int dist[MAX];

void dfs(int s){
    visited[s] = true;

    for(int i=0; i<adj[s].size(); i++){
        int d = adj[s][i];
        int c = edgeCost[s][i];

        if(!visited[d]){
            dist[d] = dist[s] + c;
            dfs(d);
        }

        else if(dist[d] - dist[s] != c){
            exists = false;
            return;
        }
    }

    return;
}

void reset(int n){
    exists = true;

    for(int i=0; i<n; i++){
        adj[i].clear();
        edgeCost[i].clear();
        dist[i] = -1;
        visited[i] = false;
    }
}

int main(){
    int n,m;

    while(scanf("%d%d",&n,&m)==2){
        reset(n);

        while(m--){
            int u, v, c;
            scanf("%d%d%d",&u, &v, &c);
            adj[u].push_back(v);
            edgeCost[u].push_back(c);

            adj[v].push_back(u);
            edgeCost[v].push_back(-c);
        }

        for(int i=0; i<n && exists; i++){
            if(!visited[i]){
                dist[i] = 0;
                dfs(i);
            }
        }

        if(exists)
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
