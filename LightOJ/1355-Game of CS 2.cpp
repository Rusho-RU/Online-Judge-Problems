#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

vector<int>adj[MAX];
int cost[MAX][MAX];
bool visited[MAX];
stack<int>stck;

int dfs(){
    int s = stck.top(), ans=0;

    for(int i=0;i<adj[s].size();i++){
        int x = adj[s][i];
        if(visited[x])
            continue;

        stck.push(x);
        visited[x] = true;
        ans^=dfs();
    }

    stck.pop();
    if(s!=0)
        ans+=cost[stck.top()][s];
    printf("%d %d\n",s,ans);

    return ans;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        for(int i=0; i<n-1; i++){
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u][v]=cost[v][u]=w;
        }

        visited[0]=true;
        stck.push(0);
        int ans = dfs();
        printf("%d\n",ans);
    }

    return 0;
}
