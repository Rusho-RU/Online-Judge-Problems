#include <bits/stdc++.h>
using namespace std;

#define MAX 5050

vector<pair<int, int> >adj[MAX];

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)==2){
        for(int i=0; i<n; i++){
            int u,v,c;
            scanf("%d%d%d",&u,&v,&c);
            if(u==v)
                continue;
            u--, v--;
            adj[u].push_back(make_pair(v,c));
            adj[v].push_back(make_pair(u,c));
        }


    }
}
