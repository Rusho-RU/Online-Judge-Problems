#include <bits/stdc++.h>
using namespace std;

#define MAX 100050

vector<int>adj[MAX];
bool visited[MAX];

int dfs(int u, int& res){
    visited[u] = true;
    int cnt=0;

    for(int i=0; i<adj[u].size(); i++){
        int v = adj[u][i];
        if(!visited[v]){
            int hold = dfs(v, res);

            if(hold%2==0){
                res++;
            }

            else
                cnt+=hold;
        }
    }

    return cnt+1;
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    dfs(1, ans);

    if(ans==0 && n%2){
        puts("-1");
    }

    else
        printf("%d\n",ans);

    return 0;
}
