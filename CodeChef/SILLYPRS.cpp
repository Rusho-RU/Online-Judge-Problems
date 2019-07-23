#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long a[n], b[n];
        int aa=0, bb=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]&1)
                aa++;
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
            if(b[i]&1)
                bb++;
        }

        long long ans = 0;

        for(int i=0; i<n; i++)
            ans+=a[i]+b[i];

        ans-=1LL*(max(aa, bb)-min(aa, bb));
        ans/=2;

        cout<<ans<<endl;
    }

    return 0;
}

