#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int cost,destination=MAX,node;
vector<int>adj[MAX];

void Reset(){
    for(int i=0;i<node;i++)
        adj[i].clear();
}

void SPFA(int source){
    int dist[node];
    memset(dist,0,sizeof dist);
    queue<int>q;
    q.push(source);

    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(int i=0;i<adj[s].size();i++){
            int x=adj[s][i];
            if(dist[s]+1>dist[x]){
                dist[x]=dist[s]+1;
                q.push(x);
                if(dist[x]==cost)
                    destination=min(destination,x);

                if(dist[x]>cost){
                    cost=dist[x];
                    destination=x;
                }
            }
        }
    }
}

int main(){
    int n,Case=0;
    while(scanf("%d",&n) && n){
        int a,b,source;
        scanf("%d",&source);
        source--;
        node=n;

        while(scanf("%d%d",&a,&b) && a+b)
            adj[a-1].push_back(b-1);

        cost=-1;
        SPFA(source);

        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",++Case,source+1,cost,destination+1);
        Reset();
    }

    return 0;
}
