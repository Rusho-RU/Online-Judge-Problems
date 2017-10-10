#include <bits/stdc++.h>
using namespace std;

#define MAX 101

vector<int>adj[MAX];
int color[MAX], Time;

struct info{
    int val, pos;
    info(int a, int b):val(a), pos(b){}
};

vector<info>v;

bool cmp(const info& a, const info& b){
    if(a.val==b.val)
        return a.pos<b.pos;
    return a.val>b.val;
}

void dfs(int s){
    ++Time;
    color[s] = 1;

    for(int i=0; i<adj[s].size(); i++){
        int x = adj[s][i];

        if(color[x]==0)
            dfs(x);
    }

    v.push_back(info(++Time,s+1));

    color[s] = 2;
    return;
}

void reset(int n){
    v.clear();
    for(int i=0; i<n; i++){
        adj[i].clear();
        color[i] = 0;
    }
}

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) && n+m){
        reset(n);
        for(int i=0; i<m; i++){
            int u,v;
            scanf("%d%d",&u,&v);
            u--, v--;
            adj[u].push_back(v);
        }

        Time=0;
        for(int i=0; i<n; i++){
            if(color[i]==0){
                //Time=0;
                dfs(i);
            }
        }

        sort(v.begin(), v.end(), cmp);

        printf("%d",v[0].pos);

        for(int i=1; i<n; i++){
            printf(" %d",v[i].pos);
        }
        puts("");
    }

    return 0;
}
