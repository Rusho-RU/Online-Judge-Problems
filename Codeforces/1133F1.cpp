#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 200010

vector<int>adj[MAX];
int degree[MAX];
int parent[MAX];

int Find(int x){
    if(x==parent[x])
        return x;

    return parent[x] = Find(parent[x]);
}

bool Union(int x, int y){
    int u = Find(x), v = Find(y);

    if(u!=v){
        parent[u] = v;
        return true;
    }

    return false;
}

int main(){
    FasterIO;

    int n, m;

    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;

        degree[u]++;
        degree[v]++;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<=n; i++)
        parent[i] = i;

    int node = 0, mx = INT_MIN;

    for(int i=1; i<=n; i++)
        if(degree[i]>mx)
            mx = degree[i], node = i;

    for(auto nd : adj[node]){
        Union(nd, node);
        cout<<nd<<" "<<node<<endl;
    }

    for(int u=1; u<=n; u++){
        if(u==node)
            continue;

        for(auto v : adj[u])
            if(Union(u, v))
                cout<<u<<" "<<v<<endl;
    }

    return 0;
}

