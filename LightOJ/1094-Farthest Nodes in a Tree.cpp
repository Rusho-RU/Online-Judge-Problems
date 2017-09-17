#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int node,a,b,c;
        scanf("%d",&node);
        vector<int>adj[node];
        map<int,map<int,int> >info;
        for(int i=1;i<node;i++){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].push_back(b);
            adj[b].push_back(a);
            info[a][b]=c;
            info[b][a]=c;
        }
        int dist[node],rem,max=0;
        memset(dist,-1,node*sizeof (int));
        queue<int>q;
        q.push(0);
        dist[0]=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i=0;i<adj[x].size();i++){
                int hold=adj[x][i];
                if(dist[hold]==-1){
                    dist[hold]=dist[x]+info[x][hold];
                    q.push(hold);
                    if(dist[hold]>max){
                        max=dist[hold];
                        rem=hold;
                    }
                }
            }
        }
        memset(dist,-1,node*sizeof (int));
        max=0;
        q.push(rem);
        dist[rem]=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i=0;i<adj[x].size();i++){
                int hold=adj[x][i];
                if(dist[hold]==-1){
                    dist[hold]=dist[x]+info[x][hold];
                    q.push(hold);
                    if(dist[hold]>max){
                        max=dist[hold];
                        rem=hold;
                    }
                }
            }
        }
        printf("Case %d: %d\n",Case,max);
    }
    return 0;
}
