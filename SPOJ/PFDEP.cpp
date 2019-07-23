#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 10010

vector<int>adj[MAX];
bool visited[MAX];
stack<int>stck;

void dfs(int u){
    visited[u] = true;

    sort(all(adj[u]), greater<>());

    for(auto v : adj[u]){
        if(!visited[v])
            dfs(v);
    }

    stck.push(u);
}

void reset(){
    for(int i=0; i<MAX; i++)
        adj[i].clear(), visited[i] = 0;
}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        reset();
        while(m--){
            int u, e, v;
            cin>>v;
            cin>>e;

            while(e--){
                cin>>u;
                adj[u].push_back(v);
            }
        }

        for(int i=n; i>0; i--){
            if(!visited[i])
                dfs(i);
        }

        while(!stck.empty())
            cout<<stck.top()<<" ", stck.pop();
        cout<<endl;
    }

    return 0;
}

