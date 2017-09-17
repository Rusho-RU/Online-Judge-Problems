#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        vector<int>adj[n];

        for(int i=1;i<n;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }

        int length=0, reach=0;

        int dist[n], probability[n];
        memset(dist, -1, sizeof dist);
        queue<int>q;
        q.push(0);
        dist[0]=0;
        probability[0]=1;
        double ans=0;

        while(!q.empty()){
            int s=q.front();
            q.pop();

            for(int i=0;i<adj[s].size();i++){
                int x=adj[s][i];

                if(dist[x]==-1){
                    dist[x]=dist[s]+1;
                    probability[x]=probability[s]*adj[s].size();
                    ans+=(double)dist[x]/probability[x];
                    q.push(x);
                }
            }
        }

        printf("%0.15lf\n",ans);
    }
    return 0;
}
