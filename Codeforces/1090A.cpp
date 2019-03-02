#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        vector<pair<int, int> >v;

        int mx, beton, m;

        for(int i=0; i<n; i++){
            cin>>m;
            mx = INT_MIN;

            for(int j=0; j<m; j++){
                cin>>beton;
                mx = max(mx, beton);
            }

            v.push_back(make_pair(mx, m));
        }

        sort(v.begin(), v.end(), greater<pair<int, int> >());

        long long ans = 0;

        for(int i=1; i<n; i++){
            ans += (long long)(v[0].first - v[i].first) * v[i].second;
        }

        cout<<ans<<endl;
    }

    return 0;
}
