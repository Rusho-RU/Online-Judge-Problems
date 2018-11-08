#include <bits/stdc++.h>
using namespace std;

#define MAX 10050

vector<int>adj[MAX];
int level[MAX];
bool visited[MAX];

void bfs(){
    queue<int>q;
    q.push(1);
    level[1] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];

            if(!visited[v]){
                q.push(v);
                level[v] = level[u] + 1;
                visited[v] = true;
            }
        }
    }

    return;
}

void reset(int n){
    for(int i=1; i<=n; i++){
        visited[i] = false;
        adj[i].clear();
    }
    return;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, m;
        scanf("%d %d",&n,&m);

        reset(n);

        while(m--){
            int u, v;

            scanf("%d %d",&u,&v);

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs();

        printf("%d\n",level[n]);
    }

    return 0;
}
