#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int m,p;
        vector<int>adj[n];

        for(int i=0;i<n;i++){
            scanf("%d",&m);
            for(int j=0;j<m;j++){
                scanf("%d",&p);
                adj[i].push_back(p);
            }
        }

        int t,source;
        scanf("%d",&t);

        while(t--){
            scanf("%d",&source);
            queue<int>q;
            q.push(source);
            int dist[n];
            memset(dist,-1,sizeof dist);
            dist[source]=0;

            while(!q.empty()){
                int s=q.front();
                q.pop();
                for(int i=0;i<adj[s].size();i++){
                    int x=adj[s][i];
                    if(dist[x]==-1){
                        dist[x]=dist[s]+1;
                        q.push(x);
                    }
                }
            }

            int Count[n],rem=-1,m=0;
            memset(Count,0,sizeof Count);

            for(int i=0;i<n;i++){
                if(dist[i]>0){
                    Count[dist[i]]++;
                    if(Count[dist[i]]>m){
                        m=Count[dist[i]];
                        rem=dist[i];
                    }
                    if(Count[dist[i]]==m)
                        rem=min(rem,Count[dist[i]]);
                }
            }

            if(rem==-1) puts("0");
            else printf("%d %d\n",m,rem);
        }
    }
    return 0;
}
