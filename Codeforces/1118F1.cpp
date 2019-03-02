#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 300010

int n, color[MAX], bridge;
bool visited[MAX];
vector<int>adj[MAX];

int dfs(int u){
    visited[u] = true;

    if(adj[u].empty())
        return 0;

    int hold = dfs(adj[u][0]);

    for(int i=1; i<adj[u].size(); i++){
        if(visited[adj[u][i]])
            continue;

        if(color[adj[u][i]]!=color[adj[u][i-1]]){
            return -1;
        }

        int val = dfs(adj[u][i]);

        if(!hold)
            hold = val;

        else if(val && val!=hold)
            return -1;
    }

    bridge++;
    return hold;
}

int main(){
    FasterIO;

    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>color[i];

        for(int i=0; i<n-1; i++){
            int u, v;
            cin>>u>>v;

            u--, v--;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(0);

        cout<<bridge<<endl;
    }

    return 0;
}




