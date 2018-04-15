#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;

#define MAX 1010
#define INF 0x3f3f3f3f

int path[MAX], pathReturn[MAX], cost[MAX][MAX], reverseCost[MAX][MAX];
vector<int>graph[MAX], reverseGraph[MAX];

struct cmp{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    }
};

void dijkstra(int source, const vector<int>graph[], int cost[][MAX], int data[], int n){
    for(int i=0; i<=n; i++)
        data[i] = INF;
    data[source] = 0;

    priority_queue< pair<int, int>, vector<pair<int, int> >, cmp >pq;
    pq.push(make_pair(source, 0));

    while(!pq.empty()){
        int u = pq.top().first;
        int c = pq.top().second;
        pq.pop();

        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i];

            if(c+cost[u][v] < data[v]){
                data[v] = c+cost[u][v];
                pq.push(make_pair(v, data[v]));
            }
        }
    }

    return;
}

void reset(int n){
    for(int i=0; i<=n; i++){
        graph[i].clear();
        reverseGraph[i].clear();
    }
}

int main(){
    int n,m,x;

    while(scanf("%d%d%d",&n,&m,&x)==3){
        for(int i=0; i<m; i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            graph[u].push_back(v);
            cost[u][v] = w;
            reverseGraph[v].push_back(u);
            reverseCost[v][u] = w;
        }

        dijkstra(x, graph, cost, pathReturn, n);
        dijkstra(x, reverseGraph, reverseCost, path, n);

        int ans = -1;

        for(int i=1; i<=n; i++){
            ans = max(ans, path[i] + pathReturn[i]);
        }
        printf("%d\n",ans);

        reset(n);
    }

    return 0;
}
