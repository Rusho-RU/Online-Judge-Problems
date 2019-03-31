#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 100010

int parent[MAX], cnt[MAX];
const int MOD = 1000000007;

long long bigmod(long long a, long long b){
    if(b==0)
        return 1;

    if(b&1)
        return (a%MOD*(bigmod(a, b-1)))%MOD;

    long long c = bigmod(a, b/2);

    return ((c%MOD) * (c%MOD))%MOD;
}

int Find(int x){
    if(x==parent[x])
        return x;

    return parent[x] = Find(parent[x]);
}

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        for(int i=0; i<=n; i++)
            parent[i] = i;
        memset(cnt, 0, sizeof cnt);

        for(int i=1; i<n; i++){
            int u, v, w;
            cin>>u>>v>>w;

            if(w==0){
                int uu = Find(u);
                int vv = Find(v);

                if(uu!=vv)
                    parent[uu] = vv;
            }
        }

        for(int i=1; i<=n; i++)
            Find(i);

        for(int i=1; i<=n; i++)
            cnt[parent[i]]++;

        long long ans = bigmod((long long)n, (long long)k);

        long long total = 0;

        for(int i=1; i<=n; i++){
            total = (total + bigmod((long long)cnt[i], (long long)k)) % MOD;
        }

        ans = (ans-total+MOD)%MOD;

        cout<<ans<<endl;
    }

    return 0;
}

