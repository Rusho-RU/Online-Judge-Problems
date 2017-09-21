#include <bits/stdc++.h>
using namespace std;

#define MAX 1001
#define MAX2 500500

struct node_type{
    int x, y;
};

vector<node_type>node;

struct edge_type{
    int u,v;
    double e;
};

bool comp(const edge_type& a, const edge_type& b){
    return a.e<b.e;
}

vector<edge_type>edge;

int state_parent[MAX], country_parent[MAX2];

void Reset(int n){
    for(int i=0;i<n;i++)
        state_parent[i]=country_parent[i]=i;
    node.clear(), edge.clear();
}

int state_find(int x){
    if(state_parent[x]==x) return x;
    return state_parent[x]=state_find(state_parent[x]);
}

void state_union(int x, int y){
    int u=state_find(x), v=state_find(y);
    if(u!=v){
        state_parent[u]=v;
    }
}

int country_find(int x){
    if(country_parent[x]==x) return x;
    return country_parent[x]=country_find(country_parent[x]);
}

bool country_union(int x, int y){
    int u=country_find(x), v=country_find(y);
    if(u!=v){
        country_parent[u]=v;
        return false;
    }
    return true;
}

double calculate(int i, int x, int y){
    int X=node[i].x-x, Y=node[i].y-y;
    return sqrt(X*X+Y*Y);
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int cities,x,y,state=0;
        double threshold;
        scanf("%d %lf",&cities,&threshold);

        Reset(cities);

        for(int i=0;i<cities;i++){
            scanf("%d%d",&x,&y);
            for(int j=node.size()-1;j>=0;j--){
                double h=calculate(j,x,y);
                if(h<=threshold) state_union(j,node.size());
                edge.push_back({j,node.size(),h});
            }
            node.push_back({x,y});
        }

        for(int i=0;i<cities;i++)
            if(state_parent[i]==i) state++;

        sort(edge.begin(), edge.end(), comp);

        double road=0,rail=0;

        for(int i=0;i<edge.size();i++){
            if(!country_union(edge[i].u, edge[i].v)){
                int u=state_find(edge[i].u), v=state_find(edge[i].v);
                if(u==v) road+=edge[i].e;
                else rail+=edge[i].e;
            }
        }

        printf("Case #%d: %d %.0lf %.0lf\n",++Case,state,road,rail);
    }
    return 0;
}
