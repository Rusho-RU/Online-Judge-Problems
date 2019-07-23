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
        string k;

        cin>>n>>k;

        int m=0;

        for(int i=0; i<k.size(); i++)
            m = (m*10 + k[i] - '0') % n;

        int ans = 2*min(m, n-m);

        if(n==2*m)
            ans--;

        cout<<ans<<endl;
    }

    return 0;
}

