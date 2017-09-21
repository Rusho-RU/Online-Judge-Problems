#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

struct edge_type{
    int u,v,w;
    edge_type(int x, int y, int z):u(x),v(y),w(z){}

    bool operator<(const edge_type& a)const{
        return w<a.w;
    }
};

int Parent[MAX];

vector<edge_type>edge;

void Reset(int n){
    for(int i=0;i<n;i++)
        Parent[i]=i;
    edge.clear();
}

int Find(int x){
    if(Parent[x]==x) return x;
    return Parent[x]=Find(Parent[x]);
}

int main(){
    int n,e;
    while(scanf("%d%d",&n,&e) && n+e){
        Reset(n);
        int x,y,w;
        for(int i=0;i<e;i++){
            scanf("%d%d%d",&x,&y,&w);
            edge.push_back(edge_type(x,y,w));
        }

        sort(edge.begin(),edge.end());

        bool done=false;

        for(int i=0;i<edge.size();i++){
            int u=Find(edge[i].u), v=Find(edge[i].v);
            if(u==v){
                if(done) printf(" ");
                printf("%d",edge[i].w);
                done=true;
            }
            else Parent[u]=v;
        }
        if(!done) printf("forest");
        printf("\n");
    }
    return 0;
}
