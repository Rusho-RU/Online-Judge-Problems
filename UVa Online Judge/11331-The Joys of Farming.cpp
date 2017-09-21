#include <bits/stdc++.h>
using namespace std;

#define MAX 2020

vector<int>adj[MAX];
int visited[MAX], dp[MAX][MAX], weight, node;
bool bicolorable;
vector<pair<int,int> >p;

void Reset(){
    for(int i=0;i<node;i++){
        adj[i].clear();
        visited[i]=0;
        for(int j=0;j<node;j++)
            dp[i][j]=-1;
    }
}

bool knap(int i, int w){
    if(i==p.size()){
        if(w==weight) return true;
        return false;
    }

    if(dp[i][w]!=-1) return dp[i][w];

    bool a=false ,b=false;

    if(w+p[i].first<=weight) a=knap(i+1,w+p[i].first);
    if(w+p[i].second<=weight) b=knap(i+1,w+p[i].second);

    return dp[i][w]=a|b;
}

void bfs(int source){
    int even=0, odd=0;
    queue<int>q;
    q.push(source);
    visited[source]=1;

    while(!q.empty()){
        int s=q.front();
        q.pop();
        if(visited[s]&1) odd++;
        else even++;

        for(int i=0;i<adj[s].size();i++){
            int x=adj[s][i];

            if(!visited[x]){
                visited[x]=visited[s]+1;
                q.push(x);
            }

            else if((visited[s]-visited[x])%2==0){
                bicolorable=false;
                return;
            }
        }
    }

    p.push_back(make_pair(even,odd));

    return;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int b,c,a;
        scanf("%d%d%d",&b,&c,&a);
        node=b+c, bicolorable=true, weight=c;
        Reset();

        for(int i=0;i<a;i++){
            int u,v;
            scanf("%d%d",&u,&v);
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=0;i<node;i++){
            if(!visited[i]){
                bfs(i);
                if(!bicolorable) break;
            }
        }

        if(!bicolorable)
            puts("no");
        else if(knap(0,0))
            puts("yes");
        else
            puts("no");

        p.clear();
    }
    return 0;
}
