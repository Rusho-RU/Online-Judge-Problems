#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 10010

vector<int>adj[MAX];
int color[MAX];
bool possible;
stack<int>stck;

void dfs(int u){
    color[u] = 1;

    sort(all(adj[u]), greater<>());

    for(auto v : adj[u]){
        if(color[v]==1){
            possible=false;
            return;
        }
        if(color[v]==0)
            dfs(v);
    }

    color[u] = 2;

    stck.push(u);
}

void reset(){
    for(int i=0; i<MAX; i++)
        adj[i].clear(), color[i] = 0;
    possible = true;
}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        reset();
        while(m--){
            int u, v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        for(int i=n; i>0 && possible; i--){
            if(color[i]==0)
                dfs(i);
        }

        if(!possible)
            cout<<"Sandro fails."<<endl;
        else{
            while(!stck.empty())
                cout<<stck.top()<<" ", stck.pop();
            cout<<endl;
        }
    }

    return 0;
}

