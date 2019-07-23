#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
const int MAX = 1e6+1;

long long ans[MAX];

int main(){
    FasterIO;

    int t;
    cin>>t;

    ans[0] = 0;

    for(int i=1; i<MAX; i++){
        ans[i] = (ans[i-1]%MOD + i%MOD + (ans[i-1]*i)%MOD)%MOD;
    }

    while(t--){
        int n;
        cin>>n;

        cout<<ans[n]<<endl;
    }

    return 0;
}

