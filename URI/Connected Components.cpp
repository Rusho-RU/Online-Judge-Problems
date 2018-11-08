#include <bits/stdc++.h>
using namespace std;

#define MAX 26

vector<int>adj[MAX], cc;
bool visited[MAX];

void bfs(int root){
    cc.clear();
    visited[root] = true;

    queue<int>q;
    q.push(root);

    while(!q.empty()){
        int u = q.front();
        cc.push_back(u);
        q.pop();

        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];

            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }

    return;
}

void reset(int n){
    for(int i=0; i<n; i++){
        visited[i] = false;
        adj[i].clear();
    }
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n,m, component=0;
        scanf("%d%d",&n,&m);

        reset(n);

        while(m--){
            char u, v;
            scanf(" %c %c",&u, &v);

            adj[u-'a'].push_back(v-'a');
            adj[v-'a'].push_back(u-'a');
        }

        printf("Case #%d:\n", ++Case);

        for(int i=0; i<n; i++){
            if(!visited[i]){
                component++;
                bfs(i);
                sort(cc.begin(), cc.end());

                for(int i=0; i<cc.size(); i++)
                    printf("%c,",cc[i]+'a');
                puts("");
            }
        }

        printf("%d connected components\n\n", component);
    }

    return 0;
}
