#include <bits/stdc++.h>
using namespace std;

vector<int>adj[100001];
int subtree[100001], depth[100001];

int dfs(int s){
    for(int i=0; i<adj[s].size(); i++)
        subtree[s] += dfs(adj[s][i]), depth[adj[s][i]] = depth[s]+1;

    return subtree[s] + 1;
}

void reset(int n){
    for(int i=0; i<n; i++)
        adj[i].clear(), subtree[i] = 0, depth[i] = 0;
    return;
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        int u,v;
        scanf("%d%d",&u,&v);
        u--, v--;
        adj[u].push_back(v);
    }

    dfs(0);
    double ans = 0;

    for(int i=1; i<n; i++){
        ans += (double)subtree[i]/depth[i];
    }

    printf("%lf\n",ans);
    return 0;
}
