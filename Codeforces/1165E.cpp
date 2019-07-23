#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 998244353;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long a[n], b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        for(int i=0, j=n; i<n; i++, j--){
            a[i]*=1LL*j*(i+1);
        }

        sort(a, a+n);
        sort(b, b+n, greater<>());

        long long ans = 0;

        for(int i=0; i<n; i++){
            a[i]%=MOD;
            b[i]%=MOD;
            ans+=a[i]*b[i];
            ans%=MOD;
        }

        cout<<ans<<endl;
    }

    return 0;
}

