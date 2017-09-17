#include <bits/stdc++.h>
using namespace std;

int main(){
    int node;
    while(scanf("%d",&node),node){
        vector<int>adj[node+1];
        int n,a,dist[node+1],count;
        while(scanf("%d",&n),n)
            while(scanf("%d",&a),a)
                adj[n].push_back(a);

        scanf("%d",&n);
        queue<int>q;
        while(n--){
            scanf("%d",&a);
            memset(dist,0,(node+1)*sizeof (int));
            count=node;
            q.push(a);
            while(!q.empty()){
                int x=q.front();
                q.pop();
                for(int i=0;i<adj[x].size();i++)
                    if(!dist[adj[x][i]]){
                        dist[adj[x][i]]=dist[x]+1;
                        q.push(adj[x][i]);
                        count--;
                    }
            }

            printf("%d",count);
            for(int i=1;i<=node;i++)
                if(!dist[i]) printf(" %d",i);
            printf("\n");
        }
    }
    return 0;
}
