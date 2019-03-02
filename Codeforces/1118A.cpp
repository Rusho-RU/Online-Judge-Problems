#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int q;
    cin>>q;

    while(q--){
        long long n, a, b;
        cin>>n>>a>>b;

        long long ans = (n/2)*min(b, 2*a) + (n%2)*a;

        cout<<ans<<endl;
    }

    return 0;
}

