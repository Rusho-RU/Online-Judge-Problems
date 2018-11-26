#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100010

int level[MAX];
vector<int>adj[MAX];

int dfs(int u){
    level[u] = 0;

    if(adj[u].empty())
        return level[u] = 1;

    for(auto v : adj[u])
        level[u] += dfs(v);

    return level[u];
}

void reset(int n){
    for(int i=0; i<n; i++)
        adj[i].clear();
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        reset(n);

        memset(level, 0, sizeof level);

        for(int i=1; i<n; i++){
            int parent;
            cin>>parent;
            parent--;
            adj[parent].push_back(i);
        }

        dfs(0);

        sort(level, level+n);

        for(int i=0; i<n; i++)
            cout<<level[i]<<" ";

        cout<<endl;
    }

    return 0;
}

