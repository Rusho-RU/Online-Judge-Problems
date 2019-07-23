#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        vector<int>adj[n+1];

        for(int i=0; i<n-1; i++){
            int u,v;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int level[n+1], parent[n+1];
        memset(level, 0, sizeof level);
        memset(parent, 0, sizeof parent);

        queue<int>q;
        q.push(1);
        level[1] = 1;

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int i=0; i<adj[u].size(); i++){
                int v = adj[u][i];

                if(!level[v]){
                    level[v] = level[u]+1;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }

        printf("Case %d:\n", ++Case);

        for(int i=2; i<=n; i++){
            if(level[i]&1)
                printf("%d %d\n", i, parent[i]);
            else if(level[i]%2==0)
                printf("%d %d\n",parent[i], i);
        }
    }

    return 0;
}
