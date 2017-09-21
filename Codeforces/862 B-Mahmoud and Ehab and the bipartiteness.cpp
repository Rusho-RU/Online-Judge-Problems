#include <bits/stdc++.h>
using namespace std;

char color[100001];
vector<int>adj[100001];
long long green,blue;

void reset(){
    for(int i=1;i<=100001;i++)
        adj[i].clear(), color[i]='w';
    green=blue=0;
    return;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        reset();
        int u,v;
        for(int i=0; i<n-1; i++){
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        color[1] = 'g';
        green++;
        queue<int>q;
        q.push(1);

        while(!q.empty()){
            int s=q.front();
            q.pop();

            for(int i=0; i<adj[s].size(); i++){
                int x=adj[s][i];

                if(color[x]=='w'){
                    if(color[s]=='g')
                        color[x]='b', blue++;
                    else
                        color[x]='g', green++;
                    q.push(x);
                }
            }
        }

        long long tot = green*blue;
        long long ans=tot-n+1;
        printf("%I64d\n",ans);
    }

    return 0;
}
