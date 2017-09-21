#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    while(scanf("%d",&n),n){
        vector<int>adj[n];
        int dist[n];
        memset(dist,-1,n*sizeof (int));
        scanf("%d",&l);
        int i,a,b;

        for(i=0;i<l;i++){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
        }

        bool Bicolorable=true;
        queue<int>q;
        q.push(0);
        dist[0]=0;
        while(!q.empty() && Bicolorable){
            int x=q.front();
            q.pop();
            for(int i=0;i<adj[x].size();i++){
                if(dist[adj[x][i]]==-1){
                    dist[adj[x][i]]=dist[x]+1;
                    q.push(adj[x][i]);
                }
                else if(dist[adj[x][i]]!=-1){
                    int hold=dist[x]-dist[adj[x][i]]+1;
                    if(hold%2)
                        Bicolorable=false;
                }
            }
        }
        if(Bicolorable) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
