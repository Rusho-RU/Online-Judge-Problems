#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define INF 0x3f3f3f3f

struct Edge{
    int u, v, w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main(){
    FasterIO;

    int t, Case=0;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<Edge>e;
        int adj[n+1][n+1];

        memset(adj, INF, sizeof adj);

        for(int i=0; i<m; i++){
            int u, v, w;
            cin>>u>>v>>w;

            e.push_back(Edge(u, v, w));

            adj[u][v] = adj[v][u] = w;
        }

        for(int k=1; k<=n; k++){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    adj[i][j] = min(adj[i][j], adj[i][k]+adj[k][j]);
                }
            }
        }

        int i;
        for(i=0; i<m; i++){
            int u = e[i].u;
            int v = e[i].v;
            int w = e[i].w;

            if(adj[u][v]!=w)
                break;
        }

        cout<<"Case #"<<++Case<<": ";

        if(i==m){
            cout<<e.size()<<endl;
            for(auto edge : e)
                cout<<edge.u<<" "<<edge.v<<" "<<edge.w<<endl;
        }

        else
            cout<<"Impossible\n";
    }

    return 0;
}

