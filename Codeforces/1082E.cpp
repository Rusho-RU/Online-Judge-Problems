#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 500050

int main(){
    FasterIO;

    int n, c, cnt[MAX] = {}, ans = 0, v, mn[MAX];

    cin>>n>>c;

    while(n--){
        cin>>v;
        mn[v] = min(mn[v], cnt[v] - cnt[c]);
        cnt[v]++;
        ans = max(ans, cnt[v] - cnt[c]);
    }

    cout<<ans+cnt[c]<<endl;

    return 0;
}

