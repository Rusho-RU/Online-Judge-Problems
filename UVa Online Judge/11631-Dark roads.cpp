#include <bits/stdc++.h>
using namespace std;

#define MAX 200001

struct type{
    int x,y;
    long long cost;
};

bool comp(const type& a, const type& b){
    return a.cost<b.cost;
}

int Parent[MAX];

void Reset(int n){
    for(int i=0;i<n;i++)
        Parent[i]=i;
}

int Find(int x){
    if(Parent[x]==x) return x;
    return Parent[x]=Find(Parent[x]);
}

bool Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        Parent[u]=v;
        return false;
    }
    return true;
}

int main(){
    int node,edge;
    while(scanf("%d%d",&node,&edge) && node+edge){
        int a,b;
        long long c,total=0,cost=0;
        type roads[edge];
        //Reset(node);
        for(int i=0;i<edge;i++){
            scanf("%d%d%lld",&a,&b,&c);
            roads[i].x=a,roads[i].y=b,roads[i].cost=c;
            total+=c;
            Parent[a]=a,Parent[b]=b;
        }

        sort(roads,roads+edge,comp);

        for(int i=0;i<edge;i++){
            int x=roads[i].x,y=roads[i].y;
            if(!Union(x,y)){
                cost+=roads[i].cost;
            }
        }
        printf("%lld\n",total-cost);
    }
    return 0;
}
