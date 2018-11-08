#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 100010

vector<int>adj[MAX];
int T, boss[MAX], degree[MAX];

void reset(int n){
    for(int i=0; i<=n; i++)
        adj[i].clear(), boss[i] = 0, degree[i] = 0;
}

int main(){
    FasterIO;

    int n, k, choice, v;

    while(cin>>n>>k){
        reset(n);

        for(int u=1; u<=k; u++){
            cin>>choice;
            while(choice--){
                cin>>v;
                adj[u].push_back(v);
                degree[v]++;
            }
        }

        queue<int>q;

        int b = 0;

        for(int i=1; i<=n; i++)
            if(!degree[i])
                q.push(i);

        while(!q.empty()){
            int u = q.front();
            q.pop();

            boss[u] = b;

            for(auto v : adj[u]){
                degree[v]--;
                if(!degree[v])
                    q.push(v);
            }

            b = u;
        }

        for(int i=1; i<=n; i++)
            cout<<boss[i]<<endl;
    }

    return 0;
}
