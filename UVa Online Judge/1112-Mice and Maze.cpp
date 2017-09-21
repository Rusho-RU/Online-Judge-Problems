#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int node,exit,time,edge,a,b,c;
        scanf("%d%d%d%d",&node,&exit,&time,&edge);
        int adj[101][101];
        memset(adj,INF,sizeof adj);

        for(int i=0;i<node;i++)
            adj[i][i]=0;

        for(int i=0;i<edge;i++){
            scanf("%d %d %d",&a,&b,&c);
            adj[a-1][b-1]=c;
        }

        for(int k=0;k<node;k++){
            for(int i=0;i<node;i++){
                for(int j=0;j<node;j++){
                    adj[i][j]=min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }

        int count=0;
        for(int i=0;i<node;i++)
            if(adj[i][exit-1]<=time) count++;

        printf("%d\n",count);
        if(t) printf("\n");
    }
    return 0;
}
