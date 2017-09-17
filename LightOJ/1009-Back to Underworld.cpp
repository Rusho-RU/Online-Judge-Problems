#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        int n,a,b;
        scanf("%d",&n);
        map<int,int>data;
        map<int, vector<int> >adj;
        while(n--){
            scanf("%d%d",&a,&b);
            data[a]=a,data[b]=b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int max=0,vampire=0,lykan=0;
        map<int,int>dist;
        queue<int>q;
        map<int,int>::iterator it=data.begin();
        for(;it!=data.end();it++){
            if(!dist[it->first]){
                vampire=0,lykan=0;
                q.push(it->first);
                dist[it->first];
                while(!q.empty()){
                    int x=q.front();
                    q.pop();
                    for(int i=0;i<adj[x].size();i++){
                        if(!dist[adj[x][i]]){
                            dist[adj[x][i]]=dist[x]+1;
                            if(dist[adj[x][i]]%2) vampire++;
                            else lykan++;
                            q.push(adj[x][i]);
                        }
                    }
                }
                vampire>lykan ? max+=vampire : max+=lykan;
            }
        }
        printf("Case %d: %d\n",z+1,max);
    }
    return 0;
}
