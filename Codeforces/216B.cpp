#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 110

int n, m;
vector<int>adj[MAX];
bool visited[MAX], cycle;

int dfs(int u, int s){
    visited[u] = true;
    int cnt = 1;

    for(int i=0; i<adj[u].size(); i++){
        int v = adj[u][i];

        if(!visited[v])
            cnt += dfs(v, u);
        else if(v!=s){
            cycle = true;
            return cnt;
        }
    }

    return cnt;
}

void reset(int n){
    for(int i=0; i<n; i++)
        adj[i].clear();
}

int main(){
    //FasterIO;

    while(cin>>n>>m){
        reset(n);

        while(m--){
            int u, v;
            scanf("%d %d",&u,&v);
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        memset(visited, false, sizeof visited);
        int cnt = 0, total = 0;

        for(int i=0; i<n; i++){
            if(!visited[i]){
                cycle = false;
                int visits = dfs(i, -1);

                if(cycle && visits&1)
                    cnt++;
            }
        }

        n-=cnt;

        if(n&1)
            cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}
