#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    long long x, y, z;

    while(cin>>x>>y>>z){
        long long tot = x/z + y/z;
        x%=z, y%=z;

        long long a = x+y;
        tot+=a/z;

        a-=a%z;

        cout<<tot<<" "<<max(0LL, a-max(x, y))<<endl;
    }

    return 0;
}

