#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 400050

struct Edge{
    int u, v;
    long long w;

    Edge(int u, int v, long long w){
        this->u = u;
        this->v = v;
        this->w = w;
    }

    bool operator < (const Edge& a){
        return w < a.w;
    }
};

int n, m, parent[MAX];

int Find(int x){
    if(x==parent[x])
        return x;

    return parent[x] = Find(parent[x]);
}

bool Union(int u, int v){
    int pu= Find(u), pv = Find(v);

    if(pu!=pv){
        parent[pu] = pv;
        return true;
    }

    return false;
}

vector<Edge>e;

int main(){
    FasterIO;

    while(cin>>n>>m){
        int node;
        long long value[n], mn = LLONG_MAX, total = 0;

        for(int i=0; i<n; i++){
            cin>>value[i];
            if(value[i] < mn){
                mn = value[i];
                node = i;
            }
        }

        for(int i=0; i<n; i++){
            if(i==node)
                continue;
            e.push_back(Edge(node+1, i+1, value[i] + value[node]));
        }

        while(m--){
            int u, v;
            long long w;
            cin>>u>>v>>w;

            e.push_back(Edge(u, v, w));
        }

        sort(e.begin(), e.end());

        for(int i=1; i<=n; i++)
            parent[i] = i;

        for(auto edge : e)
            if(Union(edge.u, edge.v))
                total+=edge.w;

        cout<<total<<endl;
    }

    return 0;
}


