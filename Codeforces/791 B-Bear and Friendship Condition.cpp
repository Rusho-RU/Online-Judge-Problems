#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)==2){
        map<int,vector<int> >adj;
        map<int,int>data;
        int a,b,i,count=0,max;
        while(m--){
            scanf("%d%d",&a,&b);
            data[a]=a,data[b]=b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int c;
        map<int,int>dist;
        queue<int>q;
        bool reasonable=true;
        for(i=1;i<=n;i++){
            if(data[i]){
                count=0;
                q.push(i);
                dist[i]=2;
                c=0;
                while(!q.empty()){
                    int x=q.front();
                    c++;
                    q.pop();
                    for(int i=0;i<adj[x].size();i++){
                        if(!dist[adj[x][i]]){
                            dist[adj[x][i]]=1;
                            q.push(adj[x][i]);
                            count++;
                        }
                    }
                }
                long long hold=(c*(c-1))/2;
                if(count!=hold) reasonable=false;
                dist.clear();
            }
        }
        if(reasonable) printf("YES\n");

        else printf("NO\n");
    }
    return 0;

}
