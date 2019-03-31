#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
#define MAX 100010

int c[MAX];
vector<int>adj[MAX], del;

int dfs(int u){
    int child = 0;

    for(auto v : adj[u]){
        child+=dfs(v);
    }

    if(c[u]==1 && child==0)
        del.push_back(u);

    return c[u] ? 0 : 1;
}

int main(){
    FasterIO;

    int n;

    cin>>n;
    int root;

    for(int i=0; i<n; i++){
        int p;
        cin>>p>>c[i];
        if(p!=-1)
            adj[p-1].push_back(i);
        else
            root = i;
    }

    dfs(root);

    sort(all(del));

    if(del.empty())
        cout<<"-1\n";
    else{
        for(auto v : del)
            cout<<v+1<<" ";
        cout<<endl;
    }
    return 0;
}

