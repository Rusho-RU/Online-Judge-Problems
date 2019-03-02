#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define MAX 100010

vector<int>adj[MAX], ans;
bool visited[MAX];

int n, m;

int main(){
    FasterIO;

    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(visited, false, sizeof visited);
    priority_queue<int, vector<int>, greater<int> >pq;

    pq.push(1);
    visited[1] = true;

    while(!pq.empty()){
        int u = pq.top();
        pq.pop();

        cout<<u<<" ";

        for(auto v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                pq.push(v);
            }
        }
    }

    cout<<endl;

    return 0;
}
