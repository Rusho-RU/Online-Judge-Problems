#include <bits/stdc++.h>
using namespace std;

#define MAX 550

vector<int>adj[MAX];
int level[MAX], parent[MAX];

int bfs(int dest){
    memset(parent, -1, sizeof parent);
    memset(level, -1, sizeof level);

    queue<int>q;
    q.push(dest);
    level[dest] = 0;

    int mn = INT_MAX;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            if(level[v]==-1){
                q.push(v);
                level[v] = level[u] + 1;
                parent[v] = u;
            }

            else if(parent[u]!=v){
                mn = min(mn, level[u] + level[v] + 1);
            }
        }
    }

    return mn;
}

void print(){
    puts("impossible");
}

void print(int n){
    printf("%d\n",n);
}

void reset(int n){
    for(int i=0; i<n; i++){
        adj[i].clear();
    }
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, m, ans = INT_MAX;
        scanf("%d%d",&n,&m);

        reset(n);

        while(m--){
            int u, v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=0; i<n; i++){
            int len = bfs(i);
            ans = min(ans, len);
        }

        printf("Case %d: ", ++Case);

        ans==INT_MAX ? print() : print(ans);
    }
}
