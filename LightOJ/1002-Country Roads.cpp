#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAX 550

vector<int>graph[MAX];
int cost[MAX][MAX];
int upto[MAX];

void reset(int n){
    for(int i=0; i<n; i++){
        graph[i].clear();
        upto[i] = INF;
        for(int j=0; j<n; j++){
            if(i==j) cost[i][j] = 0;
            else cost[i][j] = INF;
        }
    }
}

struct cmp{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    }
};

void dijkstra(int source){
    upto[source] = 0;

    priority_queue< pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > >pq;
    pq.push(make_pair(source, 0));

    while(!pq.empty()){
        int u = pq.top().first;
        pq.pop();

        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i];

            if(max(cost[u][v], upto[u]) < upto[v]){
                upto[v] = max(cost[u][v], upto[u]);
                pq.push(make_pair(v, upto[v]));
            }
        }
    }

    return;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d %d",&n, &m);

        reset(n);

        for(int i=0; i<m; i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            graph[u].push_back(v);
            graph[v].push_back(u);
            cost[v][u] = cost[u][v] = min(cost[u][v], w);
        }

        int t;
        scanf("%d",&t);
        dijkstra(t);

        printf("Case %d:\n",++Case);

        for(int i=0; i<n; i++){
            if(upto[i]==INF)
                puts("Impossible");
            else
                printf("%d\n",upto[i]);
        }
    }

    return 0;
}
