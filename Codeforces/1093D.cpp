#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 300010
#define MOD 998244353

vector<int>adj[MAX];
int color[MAX];
long long pow2[MAX];

void preCalculate(){
    pow2[0] = 1;

    for(int i=1; i<MAX; i++){
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }

    return;
}

int cnt1, cnt2;

bool dfs(int u, int curr){
    if(color[u]) return color[u]==curr;

    color[u] = curr;
    color[u]==2 ? cnt1++ : cnt2++;

    for(auto v : adj[u])
        if(!dfs(v, curr^1))
            return false;
    return true;
}

void reset(int n){
    for(int i=0; i<n; i++){
        adj[i].clear();
        color[i] = 0;
    }
}

int main(){
    FasterIO;

    preCalculate();

    int t;
    cin>>t;

    while(t--){
        long long ans = 1;

        int n, m;
        cin>>n>>m;

        bool possible = true;

        reset(n);

        while(m--){
            int u, v;
            cin>>u>>v;
            u--, v--;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=0; i<n && possible; i++){
            if(!color[i]){
                cnt1 = 0, cnt2 = 0;
                possible = dfs(i, 2);

                ans = (ans * (pow2[cnt1] + pow2[cnt2]) % MOD) % MOD;
            }
        }

        if(!possible)
            ans = 0;

        cout<<ans<<endl;
    }

    return 0;
}
