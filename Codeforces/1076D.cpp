#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount
#define MAX 300050
#define INF 0x3f3f3f3f

int cnt;

vector<int>graph[MAX];
vector<int>cost[MAX];
int data[MAX];
vector<pair<int, int> >edge;

void reset(int n){
    for(int i=0; i<n; i++){
        graph[i].clear();
    }
}

struct cmp{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    }
};

void dijkstra(int source, int n){
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

            if(c+cost[u][i] < data[v]){
                data[v] = c+cost[u][i];
                pq.push(make_pair(v, data[v]));
            }

            else
                edge.push_back(make_pair(u, v));
        }
    }

    return;
}


int main(){
    FasterIO;

    int n, m, k;

    while(cin>>n>>m>>k){
        reset(n);
        cnt = 0;

        while(m--){
            int u,v,w;
            cin>>u>>v>>w;
            u--, v--;
            cost[u].push_back(w);
            cost[v].push_back(w);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        dijkstra(0, n);

        for(int i=0; i<edge.size(); i++)
            cout<<edge[i].first<<" "<<edge[i].second<<endl;
    }

    return 0;
}
