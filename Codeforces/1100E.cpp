#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100010

struct Edge{
    int u, v, c, id;
    Edge(int u, int v, int c, int id){
        this->u = u;
        this->v = v;
        this->c = c;
        this->id = id;
    }
};

int parent[MAX];

bool cmp(const Edge& a, const Edge& b){
    return a.c>b.c;
}

int Find(int x){
    if(parent[x]==x){
        return x;
    }

    return parent[x] = Find(parent[x]);
}

bool Union(int u, int v){
    int x = Find(u);
    int y = Find(v);

    if(x==y){
        return true;
    }

    parent[x] = y;
    return false;
}

void reset(){
    for(int i=0; i<MAX; i++){
        parent[i] = i;
    }
}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        reset();

        vector<Edge>e;

        for(int i=0; i<m; i++){
            int u, v, c;
            cin>>u>>v>>c;
            e.push_back(Edge(u, v, c, i));
        }

        sort(e.begin(), e.end(), cmp);

        vector<int>ans;
        int res = 0;

        for(int i=0; i<m; i++){
            if(Union(e[i].u, e[i].v)){
                ans.push_back(e[i].id);
                res = max(res, e[i].c);
            }
        }

        cout<<res<<" "<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]+1<<" ";
        cout<<endl;
    }

    return 0;
}
