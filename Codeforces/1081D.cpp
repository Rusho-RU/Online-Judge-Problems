#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100010
#define INF 0x3f3f3f3f

vector<int>adj[MAX];
vector<int>cost[MAX];
int spec[MAX];
int data[MAX];

void dijkstra(int s, int n){
    for(int i=0; i<n; i++)
        data[i] = -INF;
    data[s] = 0;

    priority_queue< pair<int, int>, vector<pair<int, int> >, cmp >pq;
    pq.push(make_pair(s, 0));

    while(!pq.empty()){
        int u = pq.top().first;
        int c = pq.top().second;
        pq.pop();

        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];

            if(c+cost[u][i] > data[v]){
                data[v] = c+cost[u][i];
                pq.push(make_pair(v, data[v]));
            }
        }
    }

    return;
}

int main(){
    FasterIO;

    int n, m, k;

    while(cin>>n>>m>>k){
        for(int i=0; i<k; i++)
            cin>>spec[i];

        while(m--){
            int u, v, c;
            cin>>u>>v>>c;

            u--, v--;

            adj[u].push_back(v);
            adj[v].push_back(u);

            cost[u].push_back(c);
            cost[v].push_back(c);
        }

        dijkstra(spec[0]-1, n);

        for(int i=0; i<k; i++){

        }

        cout<<endl;
    }

    return 0;
}


