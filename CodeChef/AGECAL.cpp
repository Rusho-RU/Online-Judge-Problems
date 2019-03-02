#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int m;
        cin>>m;

        long long month[m+1], days[m+1];
        days[0] = 0;

        for(int i=1; i<=m; i++){
            cin>>month[i];
            days[i] = days[i-1] + month[i];
        }

        int yb, mb, db, yc, mc, dc;

        cin>>yb>>mb>>db>>yc>>mc>>dc;

        long long birthday = yb*days[m] + days[mb-1] + db + (yb-1)/4;
        long long target = yc*days[m] + days[mc-1] + dc + (yc-1)/4;

        long long ans = target - birthday + 1;

        cout<<ans<<endl;
    }

    return 0;
}

