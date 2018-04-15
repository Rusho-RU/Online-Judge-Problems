#include <bits/stdc++.h>
using namespace std;

#define MAX 250

vector<int>adj[MAX];
int dist[MAX];

void reset(int n){
    for(int i=0; i<n; i++){
        adj[i].clear();
        dist[i] = 0;
    }
}

int main(){
    int n,m;

    while(scanf("%d",&n) && n){
        scanf("%d",&m);

        while(m--){
            int u,v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int>q;
        q.push(0);
        dist[0] = 1;

        bool bicolorable = true;

        while(!q.empty() && bicolorable){
            int u = q.front();
            q.pop();

            for(int i=0; i<adj[u].size(); i++){
                int v = adj[u][i];

                if(dist[v]==0){
                    dist[v] = dist[u] + 1;
                    q.push(v);
                }

                else if((dist[u] - dist[v] + 1) & 1)
                    bicolorable = false;
            }
        }

        if(bicolorable)
            puts("BICOLORABLE.");
        else
            puts("NOT BICOLORABLE.");

        reset(n);
    }

    return 0;
}
