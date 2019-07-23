#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 30000
#define INF 0x3f3f3f3f

struct Edge{
    int u, v, w;
};

Edge edge[MAX];
int cost[110];

bool hasNegativeCycle(int n, int b){
    memset(cost, INF, sizeof cost);

    cost[1] = 0;

    for(int j=1; j<n; j++){
        for(int i=0; i<2*b; i++){
            int u = edge[i].u;
            int v = edge[i].v;
            int w = edge[i].w;

            cost[v] = min(cost[v], cost[u]+w);
        }
    }

    for(int i=0; i<2*b; i++){
        int u = edge[i].u;
        int v = edge[i].v;
        int w = edge[i].w;

        if(cost[u]+w < cost[v])
            return true;
    }

    return false;
}

int main(){
    //FasterIO;

    int n, b;

    while(scanf("%d%d",&n, &b) && n+b){
        for(int i=0; i<b; i++){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            edge[i].u = u, edge[i].v = v, edge[i].w = w;
            edge[b+i].u = v, edge[b+i].v = u, edge[b+i].w = -w;
        }

        if(hasNegativeCycle(n, b))
            puts("Y");
        else
            puts("N");
    }

    return 0;
}

