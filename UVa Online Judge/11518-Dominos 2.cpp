#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

vector<int>adj[MAX];
bool visited[MAX];
int cnt;

void dfs(int s){
    if(visited[s])
        return;

    visited[s] = true;

    for(int i=0; i<adj[s].size(); i++){
        int x = adj[s][i];
        if(!visited[x])
            dfs(x);
    }
    return;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m,l,cnt=0;
        scanf("%d%d%d",&n,&m,&l);

        while(m--){
            int u, v;
            scanf("%d%d",&u,&v);
            u--, v--;
            adj[u].push_back(v);
        }

        for(int i=0; i<l; i++){
            int domino;
            scanf("%d",&domino);
            dfs(domino-1);
        }

        for(int i=0; i<n; i++){
            if(visited[i])
                cnt++;
            visited[i] = 0;
            adj[i].clear();
        }

        printf("%d\n",cnt);
    }

    return 0;
}
