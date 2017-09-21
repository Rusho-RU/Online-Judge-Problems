#include <bits/stdc++.h>
using namespace std;

#define INFINITY 1000000000

struct type{
    int node,cost;
    bool operator<(const type &a)const{
        return a.cost<cost;
    }
};

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int node,edge,source,target,a,b,c;
        scanf("%d %d %d %d",&node,&edge,&source,&target);
        vector<int>adj[node];
        int cost[node],data[node][node];
        cost[source]=cost[target]=INFINITY;
        for(int i=1;i<=edge;i++){
            scanf("%d %d %d",&a,&b,&c);
            adj[a].push_back(b);
            adj[b].push_back(a);
            data[a][b]=data[b][a]=c;
            cost[a]=cost[b]=INFINITY;
        }

        priority_queue<type>q;
        cost[source]=0;
        q.push({source,cost[source]});
        while(!q.empty()){
            int s=q.top().node;
            q.pop();
            for(int i=0;i<adj[s].size();i++){
                int vog=adj[s][i],hold=cost[s]+data[s][vog];
                if(hold<cost[vog]){
                    cost[vog]=hold;
                    q.push({vog,cost[vog]});
                }
            }
        }
        printf("Case #%d: ",Case);
        if(cost[target]==INFINITY) printf("unreachable\n");
        else printf("%d\n",cost[target]);
    }
    return 0;
}
