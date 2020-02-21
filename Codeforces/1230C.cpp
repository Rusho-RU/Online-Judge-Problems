#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        vector<int>adj[8];
        int degree[8] = {};

        for(int i=0; i<m; i++){
            int u, v;
            cin>>u>>v;
            degree[u]++;
            degree[v]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = m, cnt=0;

        for(int i=1; i<=n; i++){
            if(degree[i]==6){
                ans--, cnt++;
            }
        }

        cout<<ans+2*(cnt>0)<<endl;
    }

    return 0;
}

