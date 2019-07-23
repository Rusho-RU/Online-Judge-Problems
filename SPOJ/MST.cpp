#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAXN 10010

struct Edge{
    int u, v, w;

    bool operator<(const Edge& e){
        return w<e.w;
    }
};

int parent[MAXN];

void reset(){
    for(int i=0; i<MAXN; i++)
        parent[i] = i;
    return;
}

int Find(int x){
    if(x==parent[x])
        return x;
    return parent[x] = Find(parent[x]);
}

bool Union(int u, int v){
    u = Find(u);
    v = Find(v);

    if(u!=v){
        parent[u] = v;
        return true;
    }

    return false;
}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        reset();

        vector<Edge>edge(m);

        for(int i=0; i<m; i++)
            cin>>edge[i].u>>edge[i].v>>edge[i].w;

        sort(all(edge));

        long long mst = 0;

        for(auto e : edge){
            if(Union(e.u, e.v)){
                mst+=1LL*e.w;
            }
        }

        cout<<mst<<endl;
    }

    return 0;
}

