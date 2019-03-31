#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int a[n], b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];

        map<pair<int, int>, int>mp;

        int zero = 0;

        for(int i=0; i<n; i++){
            if(!a[i] && !b[i]){
                zero++;
                continue;
            }

            if(!a[i])
                continue;

            int gcd = __gcd(a[i], b[i]);
            int de = a[i]/gcd;
            int nu = -b[i]/gcd;

            mp[make_pair(de, nu)]++;
        }

        int ans = 0;

        for(auto pr : mp)
            ans = max(ans, pr.second);

        cout<<ans+zero<<endl;
    }

    return 0;
}

