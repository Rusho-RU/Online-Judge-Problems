#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    long long h;
    int n;

    while(cin>>h>>n){
        long long v, cum[n+1], data[n+1];

        int cum[0], mn = INT_MAX;

        for(int i=1; i<=n; i++){
            cin>>v;
            data[i] = v;
            cum[i] = cum[i-1]+v;
            mn = min(mn, cum[i]);
        }

        long long it=0, rem=n;

        if(h>=mn){
            it = h/abs(mn);
            rem = h%abs(mn);
        }

        long long ans = it*n;

        for(int i=1; i<=n; i++){
            rem-=data[i];
            if(rem<=0){
                cout<<ans<<endl;
                return 0;
            }
            ans++;
        }


    }

    return 0;
}

