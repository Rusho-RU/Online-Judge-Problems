//Bisection Method

#include <bits/stdc++.h>
using namespace std;

#define MAX 100

struct type{
    int u,v,cost;
    type(){
        u=0,v=cost=0;
    }
};

bool comp(const type& a, const type& b){
    a.cost<b.cost;
}

vector<int>adj[MAX];
int cost[MAX][MAX];

void Reset(int n){
    for(int i=0;i<n;i++){
        adj[i].clear();
    }
}

bool BFS(int source, int dest, int limit){
    queue<int>q;
    bool reached=false;
    q.push(source);
    bool visited[MAX]={};

    while(!q.empty() && !reached){
        int s=q.front();
        q.pop();
        for(int i=0;i<adj[s].size();i++){
            int x=adj[s][i];
            if(cost[s][x]<=limit && !visited[x]){
                q.push(x);
                visited[x]=true;
                if(x==dest) reached=true;
            }
        }
    }

    return reached;
}

int main(){
    int cities,streets,query,Case=0;
    while(scanf("%d%d%d",&cities,&streets,&query) && cities+streets+query){
        int c1,c2,c,M=-1;

        for(int i=0;i<streets;i++){
            scanf("%d%d%d",&c1,&c2,&c);
            c1--,c2--;
            adj[c1].push_back(c2);
            adj[c2].push_back(c1);
            cost[c1][c2]=cost[c2][c1]=c;
            M=max(M,c);
        }

        if(Case) printf("\n");

        printf("Case #%d\n",++Case);

        while(query--){
            scanf("%d%d",&c1,&c2);
            c1--,c2--;
            int l=0, h=M, m,ans=-1;
            while(l<=h){
                m=(l+h)/2;
                if(BFS(c1,c2,m)){
                    ans=m;
                    h=m-1;
                }
                else l=m+1;
            }

            if(ans==-1) puts("no path");
            else printf("%d\n",ans);
        }

        Reset(cities);
    }

    return 0;
}
