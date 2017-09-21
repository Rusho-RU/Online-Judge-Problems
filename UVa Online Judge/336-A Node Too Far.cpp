#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;

struct type{
    int Case,count,start,TTL;
}info;
vector<type>v;

int main(){
    int edge,Case=0;
    while(scanf("%d",&edge),edge){
        map<int,int>data;
        map<int, vector<int> >adj;
        int a,b,count;
        for(int i=0;i<edge;i++){
            scanf("%d %d",&a,&b);
            data[a]=a,data[b]=b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int size=data.size();
        int TTL,start;
        queue<int>q;
        while(scanf("%d%d",&start,&TTL) && start || TTL){
            if(!data[start]) count=size;
            else if(!TTL) count=size-1;
            else{
                count=size-1;
                q.push(start);
                map<int,int>dist;
                dist[start]=1;
                while(!q.empty()){
                    int x=q.front();
                    q.pop();
                    for(int i=0;i<adj[x].size();i++){
                        if(!dist[adj[x][i]]){
                            count--;
                            dist[adj[x][i]]=dist[x]+1;
                            if(dist[adj[x][i]]!=TTL+1)
                                q.push(adj[x][i]);
                        }
                    }
                }
            }
            Case++;
            info.Case=Case,info.count=count,info.start=start,info.TTL=TTL;
            v.push_back(info);
        }
    }

    for(int i=0;i<v.size();i++)
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",v[i].Case,v[i].count,v[i].start,v[i].TTL);
    return 0;
}
