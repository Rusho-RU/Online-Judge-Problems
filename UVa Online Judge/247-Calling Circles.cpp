#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 30

int n, m;
bool adj[MAX][MAX], taken[MAX];

void floyd_warshall(){
    for(int k=0; k^n; k++){
        for(int i=0; i^n; i++){
            for(int j=0; j^n; j++){
                adj[i][j] = adj[i][j] | (adj[i][k] & adj[k][j]);
            }
        }
    }

    return;
}

int main(){
    FasterIO;

    int Case=0;

    while(cin>>n>>m && n+m){
        if(Case)
            cout<<"\n";

        map<string, int>mp;
        vector<string>data(n);

        memset(adj, false,  sizeof adj);
        memset(taken, false, sizeof taken);

        int j=0;

        for(int i=0; i^m; i++){
            string u, v;
            int u_id, v_id;
            cin>>u>>v;

            if(mp.find(u)==mp.end()){
                data[j] = u;
                u_id = j;
                mp[u] = j++;
            }

            else u_id = mp[u];

            if(mp.find(v)==mp.end()){
                data[j] = v;
                v_id = j;
                mp[v] = j++;
            }

            else v_id = mp[v];

            adj[u_id][v_id] = true;
        }

        floyd_warshall();

        cout<<"Calling circles for data set "<<++Case<<":\n";

        for(int u=0; u^n; u++){
            if(taken[u])
                continue;
            cout<<data[u];
            taken[u] = true;

            for(int v=0; v^n; v++){
                if(!taken[v] && adj[u][v] && adj[v][u]){
                    cout<<", "<<data[v];
                    taken[v] = true;
                }
            }

            cout<<"\n";
        }
    }

    return 0;
}
