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
        long long l, r, g;
        cin>>l>>r>>g;

        long long ans = r/g - (l-1)/g;

        if(ans==1 && (g<l || g>r))
            ans--;

        cout<<ans<<endl;
    }

    return 0;
}

