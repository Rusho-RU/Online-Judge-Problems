#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, d;

    while(cin>>n>>d){
        int ans = n/(2*d+1);

        if(n%(2*d+1))
            ans++;
        cout<<ans<<endl;
    }

    return 0;
}

