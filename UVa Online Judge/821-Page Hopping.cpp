#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
int N;

vector<int>adj[101];

int spfa(int source){
    int dist[101],sum=0;
    memset(dist,INF,sizeof dist);
    queue<int>q;
    dist[source]=0;
    q.push(source);
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(int i=0;i<adj[s].size();i++){
            int y=adj[s][i];
            if(dist[s]+1<dist[y]){
                dist[y]=dist[s]+1;
                q.push(y);
            }
        }
    }

    for(int i=0;i<N;i++)
        sum+=dist[i];
    return sum;
}

int main(){
    int u,v,Case=0;
    while(1){
        unordered_map<int,int>data;
        int sum=0,count=0;

        while(scanf("%d%d",&u,&v) && u || v){
            if(data.find(u)==data.end()) data[u]=count++;
            if(data.find(v)==data.end()) data[v]=count++;
            adj[data[u]].push_back(data[v]);
        }

        if(!count) break;

        N=count;
        double hold=count*(count-1);

        for(int i=0;i<count;i++)
            sum+=spfa(i);

        printf("Case %d: average length between pages = %0.3lf clicks\n",++Case,sum/hold);
        for(int i=0;i<count;i++)
            adj[i].clear();
    }
    return 0;
}
