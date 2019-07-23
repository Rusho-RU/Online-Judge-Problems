#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;
    while(cin>>n){
        int ans = 0;
        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
                ans+=__gcd(i, j);

        cout<<ans<<endl;
    }

    return 0;
}

