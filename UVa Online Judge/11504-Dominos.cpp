#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

vector<int>adj[MAX];
vector<pair<int, int> >info;
bool visited[MAX];
int T;

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    return a.second>b.second;
}

void dfs(int s){
    if(visited[s])
        return;

    ++T;
    visited[s] = true;

    for(int i=0; i<adj[s].size(); i++){
        int x = adj[s][i];
        if(!visited[x])
            dfs(x);
    }

    info.push_back(make_pair(s,++T));
    return;
}

void dfs1(int s){
    if(visited[s])
        return;

    visited[s] = true;

    for(int i=0; i<adj[s].size(); i++){
        int x = adj[s][i];
        if(!visited[x])
            dfs1(x);
    }

    return;
}

void reset(int n){
    T = 0;
    info.clear();

    for(int i=0; i<n; i++){
        visited[i] = false;
        adj[i].clear();
    }

    return;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,e, cnt = 0;
        scanf("%d%d",&n,&e);
        reset(n);

        while(e--){
            int u,v;
            scanf("%d%d",&u,&v);
            u--, v--;
            adj[u].push_back(v);
        }

        for(int i=0; i<n; i++)
            if(!visited[i])
                dfs(i);

        sort(info.begin(), info.end(), cmp);

        for(int i=0; i<n; i++)
            visited[i] = false;

        for(int i=0; i<n; i++){
            int domino = info[i].first;
            if(!visited[domino]){
                cnt++;
                dfs1(domino);
            }
        }

        printf("%d\n",cnt);
    }

    return 0;
}
