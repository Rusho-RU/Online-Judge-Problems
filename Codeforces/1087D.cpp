#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100010

int n, s;
double ans;

vector<int>adj[MAX];
int level[MAX];
int parent[MAX];

void bfs(){
    level[1] = 1;
    queue<int>q;
    q.push(1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : adj[u]){
            if(level[v]){
                parent[v] = u;
                level[v] = level[u] + 1;
            }
        }
    }
}

double go(int node){
    if(node==1){
        ans+=1.0*s/(int)adj[node].size();
        return 1.0*s/(int)adj[node].size();
    }

    double ret = go(parent[node]);

    ans+=1.0*ret/(int)adj[node].size();
    return  1.0*ret/(int)adj[node].size();
}

int main(){
    FasterIO;

    cin>>n>>s;

    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs();

    int node = 1;

    for(int i=0; i<n; i++){
        if(level[i] > level[node])
            node = i;
    }

    double ans = go(node);

    cout<<ans<<endl;

    return 0;
}


