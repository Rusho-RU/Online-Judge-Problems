#include <bits/stdc++.h>
using namespace std;

#define MAX 200050

vector<int>adj[MAX];
bool visited[MAX];
int cnt, now;
bool wtf;

bool dfs(int s){
    for(int i=0; i<adj[s].size(); i++){
        int t = adj[s][i];
        if(!visited[t]){
            if(dfs(t))
                return true;
        }
        else{
            return true;
        }
    }

    visited[s] = true;

    return false;
}

int main(){
    int n, m;
    scanf("%d%d",&n,&m);

    for(int i=0; i<m ;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(!visited[i] && dfs(i))
            cnt++;
    }

    printf("%d\n",cnt);

    return 0;
}
