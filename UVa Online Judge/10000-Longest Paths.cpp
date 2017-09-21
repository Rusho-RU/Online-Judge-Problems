#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int main(){
    int n,Case=0;
    while(scanf("%d",&n) && n){
        int adj[n][n];
        memset(adj,0,sizeof adj);
        int a,b,source;
        scanf("%d",&source);
        source--;

        while(scanf("%d%d",&a,&b) && a+b)
            adj[a-1][b-1]=1;

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k) continue;
                for(int j=0;j<n;j++){
                    if(j==i || j==k) continue;
                    if(adj[i][k] && adj[k][j])
                        adj[i][j]=max(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }

        int cost=0,destination=source+1;

        for(int i=0;i<n;i++){
            if(adj[source][i]>cost){
                cost=adj[source][i];
                destination=i+1;
            }
        }

        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",++Case,source+1,cost,destination);
    }

    return 0;
}
